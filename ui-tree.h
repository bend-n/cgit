#ifndef UI_TREE_H
#define UI_TREE_H

extern void cgit_tree_print_binary_buffer(char *buf, unsigned long size);
extern void cgit_tree_print_text_buffer(const char *name, char *buf, unsigned long size);

extern void cgit_print_tree(void);

#endif /* UI_TREE_H */
