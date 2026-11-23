typedef unsigned (*Fn)(void*);
extern "C" unsigned fn_03230114(void* p) { void* q = *(void**)((char*)p + 4); void* const* vt = *(void* const**)q; return ((Fn)vt[9])(q); }
