// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeParabola_HeaderFile
#define _GeomToStep_MakeParabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_Parabola_HeaderFile
#include <Handle_StepGeom_Parabola.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom2d_Parabola_HeaderFile
#include <Handle_Geom2d_Parabola.hxx>
#endif
#ifndef _Handle_Geom_Parabola_HeaderFile
#include <Handle_Geom_Parabola.hxx>
#endif
class StepGeom_Parabola;
class StdFail_NotDone;
class Geom2d_Parabola;
class Geom_Parabola;


//! This class implements the mapping between the class <br>
//!          Parabola from Geom and the class Parabola from <br>
//!          StepGeom which describes a Parabola from ProSTEP <br>
class GeomToStep_MakeParabola  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeParabola(const Handle(Geom2d_Parabola)& C);
  
  Standard_EXPORT   GeomToStep_MakeParabola(const Handle(Geom_Parabola)& C);
  
  Standard_EXPORT    const Handle_StepGeom_Parabola& Value() const;





protected:





private:



Handle_StepGeom_Parabola theParabola;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
