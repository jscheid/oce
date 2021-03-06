// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDF_FieldOfHAttributeArray1_HeaderFile
#define _PDF_FieldOfHAttributeArray1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PDF_Attribute_HeaderFile
#include <Handle_PDF_Attribute.hxx>
#endif
#ifndef _Handle_PDF_VArrayNodeOfFieldOfHAttributeArray1_HeaderFile
#include <Handle_PDF_VArrayNodeOfFieldOfHAttributeArray1.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PDF_Attribute;
class PDF_VArrayNodeOfFieldOfHAttributeArray1;
class PDF_VArrayTNodeOfFieldOfHAttributeArray1;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PDF_FieldOfHAttributeArray1);


class PDF_FieldOfHAttributeArray1  : public DBC_BaseArray {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PDF_FieldOfHAttributeArray1();
  
  Standard_EXPORT   PDF_FieldOfHAttributeArray1(const Standard_Integer Size);
  
  Standard_EXPORT   PDF_FieldOfHAttributeArray1(const PDF_FieldOfHAttributeArray1& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PDF_FieldOfHAttributeArray1& Other) ;
    void operator =(const PDF_FieldOfHAttributeArray1& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PDF_Attribute)& Value) ;
  
  Standard_EXPORT     Handle_PDF_Attribute& Value(const Standard_Integer Index) const;
    Handle_PDF_Attribute& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PDF_FieldOfHAttributeArray1()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
