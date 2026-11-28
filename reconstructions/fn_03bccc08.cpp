struct ListLink;
extern "C" void fn_0308e7e8(ListLink *, ListLink *);
extern "C" void fn_03bcb110(void*);

namespace {
struct List {
    char padding_0[0x44];
    char link[1];
    char padding_45[0x7];
    int count;
    int link_offset;
};
}

extern "C" void fn_03bccc08(void *list, int item) {
    List *view = (List *) list;
    if (item != 0) {
        fn_0308e7e8((ListLink *) view->link, (ListLink *) (item + view->link_offset));
        view->count = view->count + 1;
        fn_03bcb110(list);
    }
}
