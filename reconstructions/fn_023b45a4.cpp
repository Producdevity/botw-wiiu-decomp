#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a604;
extern "C" RuntimeTag data_1048a608;
extern "C" const RuntimeVTable data_1009e2ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009e2dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009e2cc;

typedef Token<&data_1048a604, &data_1048a608, &data_1009e2ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009e2dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009e2cc> Type2;

extern "C" bool fn_023b45a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
