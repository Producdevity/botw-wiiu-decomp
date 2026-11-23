typedef unsigned (*Fn)(void*);
extern "C" unsigned char fn_03008640(void* p) { void* const* vt = *(void* const**)((char*)p + 12); return ((Fn)vt[283])(p); }
