// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_GlobalNodeOfWriterLib_HeaderFile
#define _IGESData_GlobalNodeOfWriterLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_GlobalNodeOfWriterLib_HeaderFile
#include <Handle_IGESData_GlobalNodeOfWriterLib.hxx>
#endif

#ifndef _Handle_IGESData_ReadWriteModule_HeaderFile
#include <Handle_IGESData_ReadWriteModule.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Handle_IGESData_GlobalNodeOfWriterLib_HeaderFile
#include <Handle_IGESData_GlobalNodeOfWriterLib.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESData_NodeOfWriterLib_HeaderFile
#include <Handle_IGESData_NodeOfWriterLib.hxx>
#endif
class IGESData_ReadWriteModule;
class IGESData_Protocol;
class IGESData_IGESEntity;
class IGESData_WriterLib;
class IGESData_NodeOfWriterLib;



class IGESData_GlobalNodeOfWriterLib : public Standard_Transient {

public:

  
  Standard_EXPORT   IGESData_GlobalNodeOfWriterLib();
  
  Standard_EXPORT     void Add(const Handle(IGESData_ReadWriteModule)& amodule,const Handle(IGESData_Protocol)& aprotocol) ;
  
  Standard_EXPORT    const Handle_IGESData_ReadWriteModule& Module() const;
  
  Standard_EXPORT    const Handle_IGESData_Protocol& Protocol() const;
  
  Standard_EXPORT    const Handle_IGESData_GlobalNodeOfWriterLib& Next() const;




  DEFINE_STANDARD_RTTI(IGESData_GlobalNodeOfWriterLib)

protected:




private: 


Handle_IGESData_ReadWriteModule themod;
Handle_IGESData_Protocol theprot;
Handle_IGESData_GlobalNodeOfWriterLib thenext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
