
typedef struct switches {
	char* sName;
	int state;
}switches;

typedef struct queue {

}queue;

void removeFront(){
	struct Node* temp = front;
	if(front!= NULL){
		front = front->next;
	}
	free(temp);
}

void addEnd();






