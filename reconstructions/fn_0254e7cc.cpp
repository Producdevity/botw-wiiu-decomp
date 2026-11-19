#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b8ac;
extern "C" RuntimeTag data_1048b8a8;
extern "C" const RuntimeVTable data_100dc99c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dc964;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dc954;

typedef Token<&data_1048b8ac, &data_1048b8a8, &data_100dc99c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100dc964> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100dc954> Type2;

extern "C" bool fn_0254e7cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
