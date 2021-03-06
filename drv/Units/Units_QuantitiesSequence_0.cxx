// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Units_QuantitiesSequence.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _Units_Quantity_HeaderFile
#include <Units_Quantity.hxx>
#endif
#ifndef _Units_QtsSequence_HeaderFile
#include <Units_QtsSequence.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(Units_QuantitiesSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Units_QuantitiesSequence)


IMPLEMENT_DOWNCAST(Units_QuantitiesSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Units_QuantitiesSequence)


#define Item Handle_Units_Quantity
#define Item_hxx <Units_Quantity.hxx>
#define TheSequence Units_QtsSequence
#define TheSequence_hxx <Units_QtsSequence.hxx>
#define TCollection_HSequence Units_QuantitiesSequence
#define TCollection_HSequence_hxx <Units_QuantitiesSequence.hxx>
#define Handle_TCollection_HSequence Handle_Units_QuantitiesSequence
#define TCollection_HSequence_Type_() Units_QuantitiesSequence_Type_()
#include <TCollection_HSequence.gxx>

