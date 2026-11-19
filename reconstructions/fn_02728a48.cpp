#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c904;
extern "C" RuntimeTag data_1048c908;
extern "C" const RuntimeVTable data_1011e404;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011e3f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011e3e4;

typedef Token<&data_1048c904, &data_1048c908, &data_1011e404> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011e3f4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011e3e4> Type2;

extern "C" bool fn_02728a48(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
