// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_DataMapIteratorOfPresentationDirectory_HeaderFile
#define _CDM_DataMapIteratorOfPresentationDirectory_HeaderFile

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
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_DataMapNodeOfPresentationDirectory_HeaderFile
#include <Handle_CDM_DataMapNodeOfPresentationDirectory.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class CDM_Document;
class CDM_PresentationDirectory;
class CDM_DataMapNodeOfPresentationDirectory;



class CDM_DataMapIteratorOfPresentationDirectory  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   CDM_DataMapIteratorOfPresentationDirectory();
  
  Standard_EXPORT   CDM_DataMapIteratorOfPresentationDirectory(const CDM_PresentationDirectory& aMap);
  
  Standard_EXPORT     void Initialize(const CDM_PresentationDirectory& aMap) ;
  
  Standard_EXPORT    const TCollection_ExtendedString& Key() const;
  
  Standard_EXPORT    const Handle_CDM_Document& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
