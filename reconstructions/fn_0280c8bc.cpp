#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d2b0;
extern "C" RuntimeTag data_1048d2b4;
extern "C" const RuntimeVTable data_1013b888;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013b878;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013b868;

typedef Token<&data_1048d2b0, &data_1048d2b4, &data_1013b888> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1013b878> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1013b868> Type2;

extern "C" bool fn_0280c8bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
