#include "list.h"

int main() {
    List* my_list = create_list();
    insert_at_beginning(my_list, 10);
    insert_at_beginning(my_list, 20);
    insert_at_end(my_list, 30);
    insert_at_end(my_list, 40);
    
    print_list(my_list);
    
    delete_node(my_list, 20);
    
    print_list(my_list);
    
    free_list(my_list);
    
    return 0;
}

