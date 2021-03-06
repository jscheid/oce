// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_Finder_HeaderFile
#define _Transfer_Finder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Interface_ParamType_HeaderFile
#include <Interface_ParamType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Dico_DictionaryOfTransient;
class Standard_Type;
class Standard_Transient;


//! a Finder allows to map any kind of object as a Key for a Map. <br>
//!           This works by defining, for a Hash Code, that of the real Key, <br>
//!           not of the Finder which acts only as an intermediate. <br>
//!           When a Map asks for the HashCode of a Finder, this one returns <br>
//!           the code it has determined at creation time <br>
class Transfer_Finder : public MMgt_TShared {

public:

  //! Returns the HashCode which has been stored by SetHashCode <br>
//!           (remark that HashCode could be deferred then be defined by <br>
//!            sub-classes, the result is the same) <br>
  Standard_EXPORT     Standard_Integer GetHashCode() const;
  //! Specific testof equallity : to be defined by each sub-class, <br>
//!           must be False if Finders have not the same true Type, else <br>
//!           their contents must be compared <br>
  Standard_EXPORT   virtual  Standard_Boolean Equates(const Handle(Transfer_Finder)& other) const = 0;
  //! Returns the Type of the Value. By default, returns the <br>
//!           DynamicType of <me>, but can be redefined <br>
  Standard_EXPORT   virtual  Handle_Standard_Type ValueType() const;
  //! Returns the name of the Type of the Value. Default is name <br>
//!           of ValueType, unless it is for a non-handled object <br>
  Standard_EXPORT   virtual  Standard_CString ValueTypeName() const;
  //! Adds an attribute with a given name (replaces the former one <br>
//!           with the same name if already exists) <br>
  Standard_EXPORT     void SetAttribute(const Standard_CString name,const Handle(Standard_Transient)& val) ;
  //! Removes an attribute <br>
//!           Returns True when done, False if this attribute did not exist <br>
  Standard_EXPORT     Standard_Boolean RemoveAttribute(const Standard_CString name) ;
  //! Returns an attribute from its name, filtered by a type <br>
//!           If no attribute has this name, or if it is not kind of this <br>
//!           type, <val> is Null and returned value is False <br>
//!           Else, it is True <br>
  Standard_EXPORT     Standard_Boolean GetAttribute(const Standard_CString name,const Handle(Standard_Type)& type,Handle(Standard_Transient)& val) const;
  //! Returns an attribute from its name. Null Handle if not recorded <br>
//!           (whatever Transient, Integer, Real ...) <br>
  Standard_EXPORT     Handle_Standard_Transient Attribute(const Standard_CString name) const;
  //! Returns the type of an attribute : <br>
//!           ParamInt , ParamReal , ParamText (String) , ParamIdent (any) <br>
//!           or ParamVoid (not recorded) <br>
  Standard_EXPORT     Interface_ParamType AttributeType(const Standard_CString name) const;
  //! Adds an integer value for an attribute <br>
  Standard_EXPORT     void SetIntegerAttribute(const Standard_CString name,const Standard_Integer val) ;
  //! Returns an attribute from its name, as integer <br>
//!           If no attribute has this name, or not an integer, <br>
//!           <val> is 0 and returned value is False <br>
//!           Else, it is True <br>
  Standard_EXPORT     Standard_Boolean GetIntegerAttribute(const Standard_CString name,Standard_Integer& val) const;
  //! Returns an integer attribute from its name. 0 if not recorded <br>
  Standard_EXPORT     Standard_Integer IntegerAttribute(const Standard_CString name) const;
  //! Adds a real value for an attribute <br>
  Standard_EXPORT     void SetRealAttribute(const Standard_CString name,const Standard_Real val) ;
  //! Returns an attribute from its name, as real <br>
//!           If no attribute has this name, or not a real <br>
//!           <val> is 0.0 and returned value is False <br>
//!           Else, it is True <br>
  Standard_EXPORT     Standard_Boolean GetRealAttribute(const Standard_CString name,Standard_Real& val) const;
  //! Returns a real attribute from its name. 0.0 if not recorded <br>
  Standard_EXPORT     Standard_Real RealAttribute(const Standard_CString name) const;
  //! Adds a String value for an attribute <br>
  Standard_EXPORT     void SetStringAttribute(const Standard_CString name,const Standard_CString val) ;
  //! Returns an attribute from its name, as String <br>
//!           If no attribute has this name, or not a String <br>
//!           <val> is 0.0 and returned value is False <br>
//!           Else, it is True <br>
  Standard_EXPORT     Standard_Boolean GetStringAttribute(const Standard_CString name,Standard_CString& val) const;
  //! Returns a String attribute from its name. "" if not recorded <br>
  Standard_EXPORT     Standard_CString StringAttribute(const Standard_CString name) const;
  //! Returns the exhaustive list of attributes <br>
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient AttrList() const;
  //! Gets the list of attributes from <other>, as such, i.e. <br>
//!           not copied : attributes are shared, any attribute edited, <br>
//!           added, or removed in <other> is also in <me> and vice versa <br>
//!           The former list of attributes of <me> is dropped <br>
  Standard_EXPORT     void SameAttributes(const Handle(Transfer_Finder)& other) ;
  //! Gets the list of attributes from <other>, by copying it <br>
//!           By default, considers all the attributes from <other> <br>
//!           If <fromname> is given, considers only the attributes with <br>
//!           name beginning by <fromname> <br>
//! <br>
//!           For each attribute, if <copied> is True (D), its value is also <br>
//!           copied if it is a basic type (Integer,Real,String), else it <br>
//!           remains shared between <other> and <me> <br>
//! <br>
//!           These new attributes are added to the existing ones in <me>, <br>
//!           in case of same name, they replace the existing ones <br>
  Standard_EXPORT     void GetAttributes(const Handle(Transfer_Finder)& other,const Standard_CString fromname = "",const Standard_Boolean copied = Standard_True) ;




  DEFINE_STANDARD_RTTI(Transfer_Finder)

protected:

  //! Stores the HashCode which corresponds to the Value given to <br>
//!           create the Mapper <br>
  Standard_EXPORT     void SetHashCode(const Standard_Integer code) ;



private: 


Standard_Integer thecode;
Handle_Dico_DictionaryOfTransient theattrib;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
