// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_AsciiString_HeaderFile
#define _TDataStd_AsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_AsciiString_HeaderFile
#include <Handle_TDataStd_AsciiString.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TCollection_AsciiString;
class TDF_Attribute;
class TDF_RelocationTable;


//! Used to define an AsciiString attribute containing a TCollection_AsciiString <br>
class TDataStd_AsciiString : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>//! Returns the GUID of the attribute. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Finds, or creates an AsciiString attribute and sets the string. <br>
//!          the AsciiString attribute is returned. <br>//! AsciiString methods <br>
//!          =================== <br>
  Standard_EXPORT   static  Handle_TDataStd_AsciiString Set(const TDF_Label& label,const TCollection_AsciiString& string) ;
  
  Standard_EXPORT   TDataStd_AsciiString();
  
  Standard_EXPORT     void Set(const TCollection_AsciiString& S) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Get() const;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_AsciiString)

protected:




private: 


TCollection_AsciiString myString;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
