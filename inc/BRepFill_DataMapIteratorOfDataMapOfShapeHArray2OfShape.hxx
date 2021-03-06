// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape_HeaderFile
#define _BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif
#ifndef _Handle_BRepFill_DataMapNodeOfDataMapOfShapeHArray2OfShape_HeaderFile
#include <Handle_BRepFill_DataMapNodeOfDataMapOfShapeHArray2OfShape.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_HArray2OfShape;
class TopTools_ShapeMapHasher;
class BRepFill_DataMapOfShapeHArray2OfShape;
class BRepFill_DataMapNodeOfDataMapOfShapeHArray2OfShape;



class BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape();
  
  Standard_EXPORT   BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape(const BRepFill_DataMapOfShapeHArray2OfShape& aMap);
  
  Standard_EXPORT     void Initialize(const BRepFill_DataMapOfShapeHArray2OfShape& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const Handle_TopTools_HArray2OfShape& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
