#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489b70;
extern "C" RuntimeTag data_10489b74;
extern "C" const RuntimeVTable data_1007e854;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007e844;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007e834;

typedef Token<&data_10489b70, &data_10489b74, &data_1007e854> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007e844> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007e834> Type2;

extern "C" bool fn_02301f6c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
