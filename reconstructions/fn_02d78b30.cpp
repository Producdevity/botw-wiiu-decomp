typedef void (*Fn)(void*);
extern "C" unsigned fn_02d78b30(void* p) { void* const* vt = *(void* const**)((char*)p + 4); ((Fn)vt[7])(p); return *(unsigned*)((char*)p + 0); }
