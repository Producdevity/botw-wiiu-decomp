#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104900e4;
extern "C" RuntimeTag data_10492d1c;
extern "C" const RuntimeVTable data_102a9bfc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a9bec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a9bdc;

typedef Token<&data_104900e4, &data_10492d1c, &data_102a9bfc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a9bec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a9bdc> Type2;

extern "C" bool fn_032d6670(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
