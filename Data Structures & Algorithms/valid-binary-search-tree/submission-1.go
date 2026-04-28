/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func isValidBST(root *TreeNode) bool {
    return validBST(root, nil, nil)
}

func validBST(node *TreeNode, min, max *int) bool {
	if node == nil {
		return true
	}

	if min != nil && node.Val <= *min {
		return false
	}

	if max!=nil && node.Val >= *max {
		return false
	}

	return validBST(node.Left, min, &node.Val) && validBST(node.Right, &node.Val, max)
}
