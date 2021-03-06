// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_TrimmingSelect_HeaderFile
#define _StepGeom_TrimmingSelect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianPoint_HeaderFile
#include <Handle_StepGeom_CartesianPoint.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;
class StepGeom_CartesianPoint;



class StepGeom_TrimmingSelect  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a TrimmingSelect SelectType <br>
  Standard_EXPORT   StepGeom_TrimmingSelect();
  //! Recognizes a TrimmingSelect Kind Entity that is : <br>
//!        1 -> CartesianPoint <br>
//!        0 else (i.e. Real) <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns a TrimmingMember (for PARAMETER_VALUE) as preferred <br>
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Recognizes a SelectMember as Real, named as PARAMETER_VALUE <br>
//!            1 -> ParameterValue i.e. Real <br>
//!            0 else (i.e. Entity) <br>
  Standard_EXPORT   virtual  Standard_Integer CaseMem(const Handle(StepData_SelectMember)& ent) const;
  //! returns Value as a CartesianPoint (Null if another type) <br>
  Standard_EXPORT     Handle_StepGeom_CartesianPoint CartesianPoint() const;
  //! sets the ParameterValue as Real <br>
  Standard_EXPORT     void SetParameterValue(const Standard_Real aParameterValue) ;
  //! returns Value as a Real (0.0 if not a Real) <br>
  Standard_EXPORT     Standard_Real ParameterValue() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
