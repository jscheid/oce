// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_DataMapOfShapeListOfC2DF_HeaderFile
#define _TopOpeBRepTool_DataMapOfShapeListOfC2DF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF_HeaderFile
#include <Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepTool_ListOfC2DF;
class TopTools_ShapeMapHasher;
class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF;



class TopOpeBRepTool_DataMapOfShapeListOfC2DF  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepTool_DataMapOfShapeListOfC2DF(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepTool_DataMapOfShapeListOfC2DF& Assign(const TopOpeBRepTool_DataMapOfShapeListOfC2DF& Other) ;
    TopOpeBRepTool_DataMapOfShapeListOfC2DF& operator =(const TopOpeBRepTool_DataMapOfShapeListOfC2DF& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepTool_DataMapOfShapeListOfC2DF()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const TopOpeBRepTool_ListOfC2DF& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const TopOpeBRepTool_ListOfC2DF& Find(const TopoDS_Shape& K) const;
   const TopOpeBRepTool_ListOfC2DF& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopOpeBRepTool_ListOfC2DF& ChangeFind(const TopoDS_Shape& K) ;
    TopOpeBRepTool_ListOfC2DF& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   TopOpeBRepTool_DataMapOfShapeListOfC2DF(const TopOpeBRepTool_DataMapOfShapeListOfC2DF& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
