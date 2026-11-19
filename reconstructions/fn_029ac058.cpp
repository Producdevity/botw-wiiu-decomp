#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e3d0;
extern "C" RuntimeTag data_1048e3d4;
extern "C" const RuntimeVTable data_1017811c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1017810c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101780fc;

typedef Token<&data_1048e3d0, &data_1048e3d4, &data_1017811c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1017810c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101780fc> Type2;

extern "C" bool fn_029ac058(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
