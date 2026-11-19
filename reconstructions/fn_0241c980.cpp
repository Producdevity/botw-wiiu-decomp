#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489c30;
extern "C" RuntimeTag data_10489c34;
extern "C" const RuntimeVTable data_100af60c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100af5fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100af5ec;

typedef Token<&data_10489c30, &data_10489c34, &data_100af60c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100af5fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100af5ec> Type2;

extern "C" bool fn_0241c980(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
