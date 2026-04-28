/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func invertTree(root *TreeNode) *TreeNode {
    if root == nil {
		return nil
	}

	swapLeft := invertTree(root.Left)
	swapRight := invertTree(root.Right)

	root.Right = swapLeft
	root.Left = swapRight

	return root
}
