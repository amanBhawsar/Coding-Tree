SELECT N,
    CASE WHEN P is NULL THEN 'Root' 
         WHEN N in (select P from BST) THEN 'Inner'
         ELSE 'Leaf' 
END FROM BST order by N;