// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_RemoveCurves_HeaderFile
#define _IGESSelect_RemoveCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_RemoveCurves_HeaderFile
#include <Handle_IGESSelect_RemoveCurves.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IGESSelect_ModelModifier_HeaderFile
#include <IGESSelect_ModelModifier.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Removes Curves UV or 3D (not both !) from Faces, those <br>
//!           designated by the Selection. No Selection means all the file <br>
class IGESSelect_RemoveCurves : public IGESSelect_ModelModifier {

public:

  //! Creates a RemoveCurves from Faces (141/142/143/144) <br>
//!           UV True  : Removes UV Curves (pcurves) <br>
//!           UV False : Removes 3D Curves <br>
  Standard_EXPORT   IGESSelect_RemoveCurves(const Standard_Boolean UV);
  //! Specific action : Removes the Curves <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which is <br>
//!           "Remove Curves UV on Face"  or  "Remove Curves 3D on Face" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_RemoveCurves)

protected:




private: 


Standard_Boolean theUV;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
