#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487eb0;
extern "C" RuntimeTag data_10487eb4;
extern "C" const RuntimeVTable data_10031688;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10031678;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10031668;

typedef Token<&data_10487eb0, &data_10487eb4, &data_10031688> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10031678> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10031668> Type2;

extern "C" bool fn_0215f220(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
