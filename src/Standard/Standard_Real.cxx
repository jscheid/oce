// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <float.h>
#include <Standard_Real.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NullValue.hxx>
#ifndef _Standard_Stream_HeaderFile
#include <Standard_Stream.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif

const Handle_Standard_Type& Standard_Real_Type_() 
{
  static Handle_Standard_Type _aType = 
    new Standard_Type("Standard_Real",sizeof(Standard_Real),0,NULL);
  
  return _aType;
}

// ------------------------------------------------------------------
// Hascode : Computes a hascoding value for a given real
// ------------------------------------------------------------------
Standard_Integer HashCode(const Standard_Real me, const Standard_Integer Upper)
{
  if (Upper < 1){
     Standard_RangeError::
      Raise("Try to apply HashCode method with negative or null argument.");
  }
  union 
    {
    Standard_Real R;
    Standard_Integer I[2];
    } U;
//  U.R = Abs(me); // Treat me = -0.0 ADN 27/11/97
  U.R = me ;
  return HashCode( ( U.I[0] ^ U.I[1] ) , Upper ) ;
  }

// ------------------------------------------------------------------
// ShallowCopy : Makes a copy of a real value
// ------------------------------------------------------------------
Standard_Real ShallowCopy (const Standard_Real me) 
{
  return me;
}

//-------------------------------------------------------------------
// ACos : Returns the value of the arc cosine of a real
//-------------------------------------------------------------------
Standard_Real ACos (const Standard_Real Value) 
{ 
  if ( (Value < -1.) || (Value > 1.) ){
    Standard_RangeError::Raise();
  } 
  return acos(Value); 
}

//-------------------------------------------------------------------
// ACosApprox : Returns the approximate value of the arc cosine of a real.
//              The max error is about 1 degree near Value=0.
//-------------------------------------------------------------------

inline Standard_Real apx_for_ACosApprox (const Standard_Real x)
{
  return  (-0.000007239283986332 +
    x * (2.000291665285952400 +
    x * (0.163910606547823220 +
    x * (0.047654245891495528 -
    x * (0.005516443930088506 +
    0.015098965761299077 * x))))) / sqrt(2*x);
}

Standard_Real ACosApprox (const Standard_Real Value)
{
  double XX;
  if (Value < 0.) {
    XX = 1.+Value;
    if (XX < RealSmall())
      return 0.;
    return M_PI - apx_for_ACosApprox(XX);
  }
  XX = 1.-Value;
  if (XX < RealSmall())
    return 0.;
  return apx_for_ACosApprox(XX);

// The code above is the same but includes 2 comparisons instead of 3
//   Standard_Real xn = 1.+Value;
//   Standard_Real xp = 1.-Value;
//   if (xp < RealSmall() || xn < RealSmall())
//     return 0.;
//   if (Value < 0.)
//     return M_PI - apx_for_ACosApprox (xn);
//   return apx_for_ACosApprox (xp);
}

//-------------------------------------------------------------------
// ASin : Returns the value of the arc sine of a real
//-------------------------------------------------------------------
Standard_Real ASin (const Standard_Real Value) 
{ 
  if ( Value < -1 || Value > 1 ){
    Standard_RangeError::Raise();
  }
  return asin(Value); 
}

//-------------------------------------------------------------------
// ATan2 : Returns the arc tangent of a real divide by an another real
//-------------------------------------------------------------------
Standard_Real ATan2 (const Standard_Real Value, const Standard_Real Other) 
{ 
  if ( Value == 0. && Other == 0. ){
    Standard_NullValue::Raise();
  }
  return atan2(Value,Other); 
}

//-------------------------------------------------------------------
// Sign : Returns |a| if B >= 0; -|a| if b < 0.
//             from x in the direction y
//-------------------------------------------------------------------
Standard_Real Sign(const Standard_Real a, const Standard_Real b)
{
  //==== We use the function "nextafter()" fom library "math.h" ==============
  if (b >= 0.0) {
    return Abs(a);
  } else {
    return (-1.0 * Abs(a));
  }
}

//==========================================================================
//===== The special routines for "IEEE" and differents hardwares ===========
//==========================================================================
union RealMap {
  double real;
  unsigned int map[2];
};

//--------------------------------------------------------------------
// HardwareHighBitsOfDouble :  
//    Returns 1 if the low bits are at end.   (exemple: decmips and ALPHA )
//    Returns 0 if the low bits are at begin. (exemple: sun, sgi, ...)
//--------------------------------------------------------------------
static int HardwareHighBitsOfDouble()
{
  RealMap MaxDouble;
  MaxDouble.real = DBL_MAX;
  //=========================================================
  // reperesentation of the max double in IEEE is 
  //      "7fef ffff ffff ffff"   for the big indiens.
  //      "ffff ffff 7fef ffff"   for the littel indiens.
  //=========================================================

  if(MaxDouble.map[1] != 0xffffffff){
    return 1;
  } else {
    return 0;
  }
}

//--------------------------------------------------------------------
// HardwareLowBitsOfDouble :  
//    Returns 0 if the low bits are at end.   (exemple: decmips )
//    Returns 1 if the low bits are at begin. (exemple: sun, sgi, ...)
//--------------------------------------------------------------------
static int HardwareLowBitsOfDouble()
{
  RealMap MaxDouble;
  MaxDouble.real = DBL_MAX;
  //=========================================================
  // reperesentation of the max double in IEEE is 
  //      "7fef ffff ffff ffff"   for the big indiens.
  //      "ffff ffff 7fef ffff"   for the littel indiens.
  //=========================================================

  if(MaxDouble.map[1] != 0xffffffff){
    return 0;
  } else {
    return 1;
  }
}

static int HighBitsOfDouble = HardwareHighBitsOfDouble();
static int LowBitsOfDouble = HardwareLowBitsOfDouble();

double NextAfter(const double x, const double y)
{
  RealMap res;

  res.real=x;
  
  if (x == 0.0) {
	return DBL_MIN;
  }
  if(x==y) {
    //=========================================
    //   -oo__________0___________+oo
    //               x=y
    //  The direction is "Null", so there is nothing after 
    //=========================================

  } else if (((x<y) && (x>=0.0)) || ((x>y) && (x<0.0))) {
    //=========================================
    //   -oo__________0___________+oo
    //        y <- x     x -> y
    //
    //=========================================
    if (res.map[LowBitsOfDouble]==0xffffffff) {
      res.map[LowBitsOfDouble]=0;
      res.map[HighBitsOfDouble]++;
    } else {
      res.map[LowBitsOfDouble]++;
    }
  } else {
    //=========================================
    //   -oo__________0___________+oo
    //        x -> y     y <- x
    //
    //=========================================
    if (res.map[LowBitsOfDouble]==0) {
      if (res.map[HighBitsOfDouble]==0) {
	res.map[HighBitsOfDouble]=0x80000000;
	res.map[LowBitsOfDouble]=0x00000001;
      } else {
	res.map[LowBitsOfDouble]=0xffffffff;
	res.map[HighBitsOfDouble]--;
      }
    } else {
      res.map[LowBitsOfDouble]--;
    }
  }
  return res.real;
}

// ------------------------------------------------------------------
// ShallowDump : Writes a real  value
// ------------------------------------------------------------------
Standard_EXPORT void              ShallowDump(const Standard_Real Value, 
					      Standard_OStream& s)
{ s << Value << " Standard_Real" << "\n"; }


//-------------------------------------------------------------------
// ATanh : Returns the value of the hyperbolic arc tangent of a real
//-------------------------------------------------------------------
Standard_Real     ATanh(const Standard_Real Value) 
{ 
  if ( (Value <= -1.) || (Value >= 1.) ){
    Standard_NumericError::Raise("Illegal agument in ATanh");
    cout << "Illegal agument in ATanh" << endl ;
  } 
  return atanh(Value); 
}

//-------------------------------------------------------------------
// ACosh : Returns the hyperbolic Arc cosine of a real
//-------------------------------------------------------------------
Standard_Real     ACosh (const Standard_Real Value) 
{ 
  if ( Value < 1. ){
    Standard_NumericError::Raise("Illegal agument in ACosh");
    cout << "Illegal agument in ACosh" << endl ;
  } 
  return acosh(Value); 
}

//-------------------------------------------------------------------
// Log : Returns the naturaOPl logarithm of a real
//-------------------------------------------------------------------
Standard_Real     Log (const Standard_Real Value) 
{   if ( Value <= 0. ){
    Standard_NumericError::Raise("Illegal agument in Log");
    cout << "Illegal agument in Log" << endl ;
  } 
 return log(Value); 
}
//-------------------------------------------------------------------
// Sqrt : Returns the square root of a real
//-------------------------------------------------------------------
Standard_Real     Sqrt (const Standard_Real Value) 
{ 
  if (  Value < 0. ){
    Standard_NumericError::Raise("Illegal agument in Sqrt");
    cout << "Illegal agument in Sqrt" << endl ;
  } 
 return sqrt(Value); 
}

