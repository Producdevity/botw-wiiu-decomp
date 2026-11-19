#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce64;
extern "C" RuntimeTag data_1048ce60;
extern "C" const RuntimeVTable data_1012f28c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012f27c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012f26c;

typedef Token<&data_1048ce64, &data_1048ce60, &data_1012f28c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012f27c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012f26c> Type2;

extern "C" bool fn_027a5eb8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
