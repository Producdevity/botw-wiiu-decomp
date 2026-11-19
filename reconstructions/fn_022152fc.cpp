#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488c68;
extern "C" RuntimeTag data_10488c6c;
extern "C" const RuntimeVTable data_100565ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100565dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100565cc;

typedef Token<&data_10488c68, &data_10488c6c, &data_100565ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100565dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100565cc> Type2;

extern "C" bool fn_022152fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
