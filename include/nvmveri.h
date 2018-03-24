#ifndef __NVMVERI_H__
#define __NVMVERI_H__

void *C_createVeriInstance();
void *C_deleteVeriInstance(void *);

void C_execVeri(void *, void *);
void C_getVeri(void *, void *);


void *C_createMetadataVector();
void C_deleteMetadataVector(void *);
void C_createMetadata_OpInfo(void *, char *, void *, size_t);
void C_createMetadata_Assign(void *, void *, size_t);
void C_createMetadata_Persist(void *);
void C_createMetadata_Order(void *);

extern void* metadataPtr;
extern int existVeriInstance;

#endif