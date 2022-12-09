def leafSimilar(self, root1: TreeNode, root2: TreeNode) -> bool:
        def findLeaf(root, leaf_seq):
            if not root: return
            if not root.left and not root.right:
                leaf_seq.append(root.val)
            findLeaf(root.left, leaf_seq)
            findLeaf(root.right, leaf_seq)
            return leaf_seq
        root1_leaf=findLeaf(root1, [])
        root2_leaf=findLeaf(root2, [])
        return root1_leaf == root2_leaf