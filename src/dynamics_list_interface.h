typedef struct list list;
list* (*l_new)(void);
void (*l_print_as_ints)(list*) ;
void (*l_insert)(list *l, void *el, int idx);
void (*l_insert_at)(list *l, void *el, int idx);
void (*l_delete)(list *l, void *el);
void (*l_delete_at)(list *l, int idx);
void* (*l_locate)(list *l, void *el);
void* (*l_retrieve)(list *l, int idx);
void* (*l_first)(list *l);
int (*l_first_idx)(list *l) ;
void* (*l_end)(list *l) ;
int (*l_end_idx)(list *l);
void* (*l_next)(list *l, int idx);
int (*l_next_idx)(list *l, int idx);
void* (*l_prev)(list *l, int idx);
int (*l_prev_idx)(list *l, int idx);
void (*populate_random_ints)(list*, int);
