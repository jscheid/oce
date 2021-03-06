// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_HArray1OfMultiCurve_HeaderFile
#define _AppParCurves_HArray1OfMultiCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfMultiCurve_HeaderFile
#include <Handle_AppParCurves_HArray1OfMultiCurve.hxx>
#endif

#ifndef _AppParCurves_Array1OfMultiCurve_HeaderFile
#include <AppParCurves_Array1OfMultiCurve.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class AppParCurves_MultiCurve;
class AppParCurves_Array1OfMultiCurve;



class AppParCurves_HArray1OfMultiCurve : public MMgt_TShared {

public:

  
      AppParCurves_HArray1OfMultiCurve(const Standard_Integer Low,const Standard_Integer Up);
  
      AppParCurves_HArray1OfMultiCurve(const Standard_Integer Low,const Standard_Integer Up,const AppParCurves_MultiCurve& V);
  
        void Init(const AppParCurves_MultiCurve& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppParCurves_MultiCurve& Value) ;
  
       const AppParCurves_MultiCurve& Value(const Standard_Integer Index) const;
  
        AppParCurves_MultiCurve& ChangeValue(const Standard_Integer Index) ;
  
       const AppParCurves_Array1OfMultiCurve& Array1() const;
  
        AppParCurves_Array1OfMultiCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(AppParCurves_HArray1OfMultiCurve)

protected:




private: 


AppParCurves_Array1OfMultiCurve myArray;


};

#define ItemHArray1 AppParCurves_MultiCurve
#define ItemHArray1_hxx <AppParCurves_MultiCurve.hxx>
#define TheArray1 AppParCurves_Array1OfMultiCurve
#define TheArray1_hxx <AppParCurves_Array1OfMultiCurve.hxx>
#define TCollection_HArray1 AppParCurves_HArray1OfMultiCurve
#define TCollection_HArray1_hxx <AppParCurves_HArray1OfMultiCurve.hxx>
#define Handle_TCollection_HArray1 Handle_AppParCurves_HArray1OfMultiCurve
#define TCollection_HArray1_Type_() AppParCurves_HArray1OfMultiCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
