typedef unsigned (*Fn)(void*);
extern "C" unsigned fn_0322f6cc(void* p) { void* q = *(void**)((char*)p + 4); void* const* vt = *(void* const**)q; return ((Fn)vt[9])(q); }
