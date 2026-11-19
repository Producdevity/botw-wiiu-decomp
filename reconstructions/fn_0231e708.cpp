#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489dd0;
extern "C" RuntimeTag data_10489dd4;
extern "C" const RuntimeVTable data_10085404;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100853e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100853d4;

typedef Token<&data_10489dd0, &data_10489dd4, &data_10085404> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100853e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100853d4> Type2;

extern "C" bool fn_0231e708(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
