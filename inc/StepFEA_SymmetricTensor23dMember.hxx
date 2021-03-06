// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SymmetricTensor23dMember_HeaderFile
#define _StepFEA_SymmetricTensor23dMember_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_SymmetricTensor23dMember_HeaderFile
#include <Handle_StepFEA_SymmetricTensor23dMember.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _StepData_SelectArrReal_HeaderFile
#include <StepData_SelectArrReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif


//! Representation of member for  STEP SELECT type SymmetricTensor23d <br>
class StepFEA_SymmetricTensor23dMember : public StepData_SelectArrReal {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_SymmetricTensor23dMember();
  //! Returns True if has name <br>
  Standard_EXPORT   virtual  Standard_Boolean HasName() const;
  //! Returns set name <br>
  Standard_EXPORT   virtual  Standard_CString Name() const;
  //! Set name <br>
  Standard_EXPORT   virtual  Standard_Boolean SetName(const Standard_CString name) ;
  //! Tells if the name of a SelectMember matches a given one; <br>
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Standard_CString name) const;




  DEFINE_STANDARD_RTTI(StepFEA_SymmetricTensor23dMember)

protected:




private: 


Standard_Integer mycase;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
