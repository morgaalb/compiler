struct node {
	int line_no;
	int n_value;
	char *s_value;
	int node_type;
	int type_specifier;
	char *rename;
	int visited;

	struct node *c1;
	struct node *c2;
	struct node *c3;
	struct node *sibling;
}

struct node* new_node() {
	return malloc(sizeof(node));
}

//struct node* new_program_node(
	
//
//

struct node* new_number_node(
