struct ListLink;
extern "C" void fn_0308e808(ListLink* link);

extern "C" ListLink* fn_0308e8d0(void* list) {
    if (*(int*)((char*)list + 8) > 0) {
        ListLink* link = *(ListLink**)list;
        fn_0308e808(link);
        --*(int*)((char*)list + 8);
        return link;
    }
    return 0;
}
