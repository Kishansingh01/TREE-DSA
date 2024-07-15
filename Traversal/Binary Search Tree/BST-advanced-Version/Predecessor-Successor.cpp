//To find inorderwise  predecessor and successor 

//   Steps 
//        1) Go left once 
//        2)keep going right 


// For->inoredewise predecessor

if(root->left==NULL){
    return NULL;
}

Node*pre=root->left;
while(pred->right!=NULL){
    pred=pred->right;
}
return pred;


// For->inoredewise successor

if(root->left==NULL){
    return NULL;
}
Node*succ=root->right;
while(succ->left!=NULL){
    succ=succ->left;
}
return succ;

