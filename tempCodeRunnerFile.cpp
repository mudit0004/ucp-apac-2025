bool Isbst=isbst(root,INT_MIN,INT_MAX);
    std::cout<<"The Given Tree Preorder is : "<<std::endl;
    inorder(root);
    std::cout<<((Isbst)?"The Given Tree is  a BST . ":"The Given Tree is Not a BST . ");
    std::cout<<std::endl;