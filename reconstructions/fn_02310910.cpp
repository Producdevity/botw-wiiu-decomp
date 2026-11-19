#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489cc0;
extern "C" RuntimeTag data_10489cc4;
extern "C" const RuntimeVTable data_100825b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100825a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10082598;

typedef Token<&data_10489cc0, &data_10489cc4, &data_100825b8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100825a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10082598> Type2;

extern "C" bool fn_02310910(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
