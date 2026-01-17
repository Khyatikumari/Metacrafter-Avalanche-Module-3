# ETH-AVAX-Module3 Types of Functions
The smart contract described in the provided program is a basic ERC-20 token contract created using Solidity, a programming language designed for Ethereum smart contracts. It includes functionalities for minting, burning, and transferring tokens, and is built on the foundation provided by OpenZeppelin, a popular library for secure and reusable smart contract code.
# Description
The contract is named TokenModule3, and it inherits functionalities from:

ERC20: The base contract that follows the ERC-20 token standard, which is the most common standard for fungible tokens on Ethereum and other EVM-compatible blockchains like Avalanche (AVAX).

Ownable: This is an OpenZeppelin contract that ensures only the owner of the contract has special privileges, such as minting new tokens.
The owner of this contract can mint new tokens, burn existing ones, and transfer tokens to other addresses. This makes it a simple yet powerful token contract that can be used in various applications like gaming, DeFi, or any ecosystem that needs a token.

# Getting Started
This smart contract includes:

Minting Function: Allows the contract owner to create new tokens and allocate them to specific addresses.

Burning Function: Enables any user to destroy a certain number of their own tokens, reducing the total supply.

Transferring Function: Allows users to send tokens from their address to another address, following the standard ERC-20 transfer process.

# Prerequisites
Solidity ^0.8.0 An Ethereum development environment (e.g., Remix IDE) A basic understanding of Solidity and smart contract development.

# Installing
Open Remix IDE. Create a new file with a .sol extension. Copy and paste the provided code into the file.

# CODE

// SPDX-License-Identifier: MIT
/*For this project, create a simple contract with 2-3 functions. Then show the values of those functions in frontend of the application. */
pragma solidity ^0.8.0;

import "@openzeppelin/contracts/token/ERC20/ERC20.sol";
import "@openzeppelin/contracts/access/Ownable.sol";

contract TokenModule3 is ERC20, Ownable {
    constructor(string memory _nameOfToken, string memory _symbolOfToken) 
    ERC20(_nameOfToken, _symbolOfToken) 
    Ownable(msg.sender) {}
    
    function mintTokenByOwner(address _addrToMint, uint256 _amountToMint) public onlyOwner {
        _mint(_addrToMint, _amountToMint);
    }

    function burnTokens(address _addrToBurn,uint256 _amountToBurn) public {
        _burn(_addrToBurn, _amountToBurn);
    }

    function transfer(address _receiver, uint256 _amountToTransfer) public override returns (bool) {
        return super.transfer(_receiver,_amountToTransfer);
    }
}

# Compiling and Deploying
In Remix, navigate to the "Solidity Compiler" tab. Ensure the compiler version is set to 0.8.20 (or another compatible version). Click "Compile PlasticRecycleToken.sol". After successful compilation, navigate to the "Deploy & Run Transactions" tab. Select the PlasticRecycleToken contract from the dropdown menu. Click "Deploy".

# Authors
Khyati kumari

# License
This project is licensed under the MIT License

<!---LeetCode Topics Start-->
# LeetCode Topics
## Math
|  |
| ------- |
| [0009-palindrome-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0009-palindrome-number) |
| [0012-integer-to-roman](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0012-integer-to-roman) |
| [0013-roman-to-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0013-roman-to-integer) |
| [0029-divide-two-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0029-divide-two-integers) |
| [0066-plus-one](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0066-plus-one) |
| [0166-fraction-to-recurring-decimal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0166-fraction-to-recurring-decimal) |
| [0189-rotate-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0189-rotate-array) |
| [0326-power-of-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0326-power-of-three) |
| [0342-power-of-four](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0342-power-of-four) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0679-24-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0679-24-game) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [0826-soup-servings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0826-soup-servings) |
| [0830-largest-triangle-area](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0830-largest-triangle-area) |
| [0840-magic-squares-in-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0840-magic-squares-in-grid) |
| [0867-new-21-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0867-new-21-game) |
| [0900-reordered-power-of-2](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0900-reordered-power-of-2) |
| [1015-smallest-integer-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1015-smallest-integer-divisible-by-k) |
| [1266-minimum-time-visiting-all-points](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1266-minimum-time-visiting-all-points) |
| [1390-four-divisors](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1390-four-divisors) |
| [1426-find-n-unique-integers-sum-up-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1426-find-n-unique-integers-sum-up-to-zero) |
| [1440-convert-integer-to-the-sum-of-two-no-zero-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1440-convert-integer-to-the-sum-of-two-no-zero-integers) |
| [1448-maximum-69-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1448-maximum-69-number) |
| [1523-count-odd-numbers-in-an-interval-range](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1523-count-odd-numbers-in-an-interval-range) |
| [1636-number-of-substrings-with-only-1s](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1636-number-of-substrings-with-only-1s) |
| [1817-calculate-money-in-leetcode-bank](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1817-calculate-money-in-leetcode-bank) |
| [1889-check-if-number-is-a-sum-of-powers-of-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1889-check-if-number-is-a-sum-of-powers-of-three) |
| [1925-count-square-sum-triples](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1925-count-square-sum-triples) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2050-count-good-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2050-count-good-numbers) |
| [2110-number-of-smooth-descent-periods-of-a-stock](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2110-number-of-smooth-descent-periods-of-a-stock) |
| [2147-number-of-ways-to-divide-a-long-corridor](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2147-number-of-ways-to-divide-a-long-corridor) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2174-next-greater-numerically-balanced-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2174-next-greater-numerically-balanced-number) |
| [2244-number-of-laser-beams-in-a-bank](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2244-number-of-laser-beams-in-a-bank) |
| [2288-count-operations-to-obtain-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2288-count-operations-to-obtain-zero) |
| [2307-replace-non-coprime-numbers-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2307-replace-non-coprime-numbers-in-array) |
| [2432-number-of-zero-filled-subarrays](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2432-number-of-zero-filled-subarrays) |
| [2610-closest-prime-numbers-in-range](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2610-closest-prime-numbers-in-range) |
| [2649-count-total-number-of-colored-cells](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2649-count-total-number-of-colored-cells) |
| [2661-smallest-missing-non-negative-integer-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2661-smallest-missing-non-negative-integer-after-operations) |
| [2704-maximum-difference-by-remapping-a-digit](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2704-maximum-difference-by-remapping-a-digit) |
| [2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1) |
| [2998-count-symmetric-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2998-count-symmetric-integers) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3047-find-the-largest-area-of-square-inside-two-rectangles](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3047-find-the-largest-area-of-square-inside-two-rectangles) |
| [3190-find-minimum-operations-to-make-all-elements-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3190-find-minimum-operations-to-make-all-elements-divisible-by-three) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3277-find-the-number-of-ways-to-place-people-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3277-find-the-number-of-ways-to-place-people-ii) |
| [3279-alice-and-bob-playing-flower-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3279-alice-and-bob-playing-flower-game) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3432-count-partitions-with-even-sum-difference](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3432-count-partitions-with-even-sum-difference) |
| [3433-count-mentions-per-user](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3433-count-mentions-per-user) |
| [3462-vowels-game-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3462-vowels-game-in-a-string) |
| [3512-minimum-operations-to-make-array-sum-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3512-minimum-operations-to-make-array-sum-divisible-by-k) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3577-count-the-number-of-computer-unlocking-permutations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3577-count-the-number-of-computer-unlocking-permutations) |
| [3581-the-two-sneaky-numbers-of-digitville](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3581-the-two-sneaky-numbers-of-digitville) |
| [3623-count-number-of-trapezoids-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3623-count-number-of-trapezoids-i) |
| [3625-count-number-of-trapezoids-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3625-count-number-of-trapezoids-ii) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3676-smallest-number-with-all-set-bits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3676-smallest-number-with-all-set-bits) |
| [3682-count-the-number-of-arrays-with-k-matching-adjacent-elements](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3682-count-the-number-of-arrays-with-k-matching-adjacent-elements) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3744-minimum-operations-to-make-array-elements-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3744-minimum-operations-to-make-array-elements-zero) |
| [3768-check-if-digits-are-equal-in-string-after-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3768-check-if-digits-are-equal-in-string-after-operations-i) |
| [3830-find-closest-person](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3830-find-closest-person) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
## Array
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0027-remove-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0027-remove-element) |
| [0036-valid-sudoku](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0036-valid-sudoku) |
| [0037-sudoku-solver](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0037-sudoku-solver) |
| [0066-plus-one](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0066-plus-one) |
| [0080-remove-duplicates-from-sorted-array-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0080-remove-duplicates-from-sorted-array-ii) |
| [0085-maximal-rectangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0085-maximal-rectangle) |
| [0088-merge-sorted-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0088-merge-sorted-array) |
| [0118-pascals-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0118-pascals-triangle) |
| [0120-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0120-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0135-candy](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0135-candy) |
| [0169-majority-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0169-majority-element) |
| [0189-rotate-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0189-rotate-array) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0407-trapping-rain-water-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0407-trapping-rain-water-ii) |
| [0416-partition-equal-subset-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0416-partition-equal-subset-sum) |
| [0417-pacific-atlantic-water-flow](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0417-pacific-atlantic-water-flow) |
| [0474-ones-and-zeroes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0474-ones-and-zeroes) |
| [0611-valid-triangle-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0611-valid-triangle-number) |
| [0679-24-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0679-24-game) |
| [0717-1-bit-and-2-bit-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0717-1-bit-and-2-bit-characters) |
| [0759-set-intersection-size-at-least-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0759-set-intersection-size-at-least-two) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [0830-largest-triangle-area](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0830-largest-triangle-area) |
| [0840-magic-squares-in-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0840-magic-squares-in-grid) |
| [0940-fruit-into-baskets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0940-fruit-into-baskets) |
| [0944-delete-columns-to-make-sorted](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0944-delete-columns-to-make-sorted) |
| [0955-delete-columns-to-make-sorted-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0955-delete-columns-to-make-sorted-ii) |
| [0961-n-repeated-element-in-size-2n-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0961-n-repeated-element-in-size-2n-array) |
| [1006-vowel-spellchecker](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1006-vowel-spellchecker) |
| [1018-binary-prefix-divisible-by-5](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1018-binary-prefix-divisible-by-5) |
| [1262-greatest-sum-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1262-greatest-sum-divisible-by-three) |
| [1266-minimum-time-visiting-all-points](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1266-minimum-time-visiting-all-points) |
| [1335-maximum-candies-allocated-to-k-children](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1335-maximum-candies-allocated-to-k-children) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
| [1353-find-resultant-array-after-removing-anagrams](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1353-find-resultant-array-after-removing-anagrams) |
| [1390-four-divisors](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1390-four-divisors) |
| [1402-count-square-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1402-count-square-submatrices-with-all-ones) |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [1426-find-n-unique-integers-sum-up-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1426-find-n-unique-integers-sum-up-to-zero) |
| [1458-max-dot-product-of-two-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1458-max-dot-product-of-two-subsequences) |
| [1548-check-if-all-1s-are-at-least-length-k-places-away](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1548-check-if-all-1s-are-at-least-length-k-places-away) |
| [1586-longest-subarray-of-1s-after-deleting-one-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1586-longest-subarray-of-1s-after-deleting-one-element) |
| [1590-make-sum-divisible-by-p](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1590-make-sum-divisible-by-p) |
| [1612-avoid-flood-in-the-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1612-avoid-flood-in-the-city) |
| [1628-count-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1628-count-submatrices-with-all-ones) |
| [1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array) |
| [1656-count-good-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1656-count-good-triplets) |
| [1700-minimum-time-to-make-rope-colorful](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1700-minimum-time-to-make-rope-colorful) |
| [1834-minimum-number-of-people-to-teach](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1834-minimum-number-of-people-to-teach) |
| [1851-maximum-number-of-events-that-can-be-attended-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1851-maximum-number-of-events-that-can-be-attended-ii) |
| [1917-maximum-average-pass-ratio](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1917-maximum-average-pass-ratio) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [1975-maximum-matrix-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1975-maximum-matrix-sum) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [1995-finding-pairs-with-a-certain-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1995-finding-pairs-with-a-certain-sum) |
| [2023-design-movie-rental-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2023-design-movie-rental-system) |
| [2054-two-best-non-overlapping-events](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2054-two-best-non-overlapping-events) |
| [2110-number-of-smooth-descent-periods-of-a-stock](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2110-number-of-smooth-descent-periods-of-a-stock) |
| [2137-final-value-of-variable-after-performing-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2137-final-value-of-variable-after-performing-operations) |
| [2141-maximum-running-time-of-n-computers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2141-maximum-running-time-of-n-computers) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2169-simple-bank-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2169-simple-bank-system) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2229-maximum-fruits-harvested-after-at-most-k-steps](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2229-maximum-fruits-harvested-after-at-most-k-steps) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2244-number-of-laser-beams-in-a-bank](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2244-number-of-laser-beams-in-a-bank) |
| [2262-solving-questions-with-brainpower](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2262-solving-questions-with-brainpower) |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
| [2274-keep-multiplying-found-values-by-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2274-keep-multiplying-found-values-by-two) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [2307-replace-non-coprime-numbers-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2307-replace-non-coprime-numbers-in-array) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2343-count-unguarded-cells-in-the-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2343-count-unguarded-cells-in-the-grid) |
| [2392-successful-pairs-of-spells-and-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2392-successful-pairs-of-spells-and-potions) |
| [2402-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2402-meeting-rooms-iii) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [2432-number-of-zero-filled-subarrays](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2432-number-of-zero-filled-subarrays) |
| [2435-paths-in-matrix-whose-sum-is-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2435-paths-in-matrix-whose-sum-is-divisible-by-k) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [2479-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2479-meeting-rooms-iii) |
| [2529-range-product-queries-of-powers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2529-range-product-queries-of-powers) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [2625-increment-submatrices-by-one](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2625-increment-submatrices-by-one) |
| [2661-smallest-missing-non-negative-integer-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2661-smallest-missing-non-negative-integer-after-operations) |
| [2665-minimum-time-to-repair-cars](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2665-minimum-time-to-repair-cars) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [2689-rearranging-fruits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2689-rearranging-fruits) |
| [2690-house-robber-iv](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2690-house-robber-iv) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [2975-maximum-square-area-by-removing-fences-from-a-field](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2975-maximum-square-area-by-removing-fences-from-a-field) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3047-find-the-largest-area-of-square-inside-two-rectangles](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3047-find-the-largest-area-of-square-inside-two-rectangles) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3152-maximum-value-of-an-ordered-triplet-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3152-maximum-value-of-an-ordered-triplet-ii) |
| [3154-maximum-value-of-an-ordered-triplet-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3154-maximum-value-of-an-ordered-triplet-i) |
| [3190-find-minimum-operations-to-make-all-elements-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3190-find-minimum-operations-to-make-all-elements-divisible-by-three) |
| [3194-find-words-containing-character](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3194-find-words-containing-character) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3242-count-elements-with-maximum-frequency](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3242-count-elements-with-maximum-frequency) |
| [3277-find-the-number-of-ways-to-place-people-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3277-find-the-number-of-ways-to-place-people-ii) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3381-maximum-subarray-sum-with-length-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3381-maximum-subarray-sum-with-length-divisible-by-k) |
| [3383-taking-maximum-energy-from-the-mystic-dungeon](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3383-taking-maximum-energy-from-the-mystic-dungeon) |
| [3430-count-days-without-meetings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3430-count-days-without-meetings) |
| [3432-count-partitions-with-even-sum-difference](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3432-count-partitions-with-even-sum-difference) |
| [3433-count-mentions-per-user](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3433-count-mentions-per-user) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3453-separate-squares-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3453-separate-squares-i) |
| [3454-separate-squares-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3454-separate-squares-ii) |
| [3459-find-the-minimum-area-to-cover-all-ones-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3459-find-the-minimum-area-to-cover-all-ones-ii) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3483-alternating-groups-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3483-alternating-groups-ii) |
| [3490-find-the-maximum-length-of-valid-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3490-find-the-maximum-length-of-valid-subsequence-i) |
| [3501-delete-nodes-from-linked-list-present-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3501-delete-nodes-from-linked-list-present-in-array) |
| [3512-minimum-operations-to-make-array-sum-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3512-minimum-operations-to-make-array-sum-divisible-by-k) |
| [3531-count-covered-buildings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3531-count-covered-buildings) |
| [3562-maximum-profit-from-trading-stocks-with-discounts](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3562-maximum-profit-from-trading-stocks-with-discounts) |
| [3573-best-time-to-buy-and-sell-stock-v](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3573-best-time-to-buy-and-sell-stock-v) |
| [3577-count-the-number-of-computer-unlocking-permutations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3577-count-the-number-of-computer-unlocking-permutations) |
| [3581-the-two-sneaky-numbers-of-digitville](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3581-the-two-sneaky-numbers-of-digitville) |
| [3583-count-special-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3583-count-special-triplets) |
| [3592-find-x-sum-of-all-k-long-subarrays-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3592-find-x-sum-of-all-k-long-subarrays-ii) |
| [3606-coupon-code-validator](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3606-coupon-code-validator) |
| [3610-find-x-sum-of-all-k-long-subarrays-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3610-find-x-sum-of-all-k-long-subarrays-i) |
| [3612-adjacent-increasing-subarrays-detection-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3612-adjacent-increasing-subarrays-detection-i) |
| [3616-make-array-elements-equal-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3616-make-array-elements-equal-to-zero) |
| [3619-adjacent-increasing-subarrays-detection-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3619-adjacent-increasing-subarrays-detection-ii) |
| [3620-maximum-number-of-distinct-elements-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3620-maximum-number-of-distinct-elements-after-operations) |
| [3622-maximum-frequency-of-an-element-after-performing-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3622-maximum-frequency-of-an-element-after-performing-operations-i) |
| [3623-count-number-of-trapezoids-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3623-count-number-of-trapezoids-i) |
| [3625-count-number-of-trapezoids-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3625-count-number-of-trapezoids-ii) |
| [3640-maximum-frequency-of-an-element-after-performing-operations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3640-maximum-frequency-of-an-element-after-performing-operations-ii) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
| [3656-minimum-number-of-operations-to-make-elements-in-array-distinct](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3656-minimum-number-of-operations-to-make-elements-in-array-distinct) |
| [3657-check-if-grid-can-be-cut-into-sections](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3657-check-if-grid-can-be-cut-into-sections) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3733-length-of-longest-v-shaped-diagonal-segment](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3733-length-of-longest-v-shaped-diagonal-segment) |
| [3741-reschedule-meetings-for-maximum-free-time-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3741-reschedule-meetings-for-maximum-free-time-ii) |
| [3743-reschedule-meetings-for-maximum-free-time-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3743-reschedule-meetings-for-maximum-free-time-i) |
| [3744-minimum-operations-to-make-array-elements-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3744-minimum-operations-to-make-array-elements-zero) |
| [3747-maximum-difference-between-adjacent-elements-in-a-circular-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3747-maximum-difference-between-adjacent-elements-in-a-circular-array) |
| [3794-find-the-minimum-amount-of-time-to-brew-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3794-find-the-minimum-amount-of-time-to-brew-potions) |
| [3834-minimum-operations-to-convert-all-elements-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3834-minimum-operations-to-convert-all-elements-to-zero) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Two Pointers
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0019-remove-nth-node-from-end-of-list](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0027-remove-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0027-remove-element) |
| [0080-remove-duplicates-from-sorted-array-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0080-remove-duplicates-from-sorted-array-ii) |
| [0088-merge-sorted-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0088-merge-sorted-array) |
| [0165-compare-version-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0165-compare-version-numbers) |
| [0189-rotate-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0189-rotate-array) |
| [0611-valid-triangle-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0611-valid-triangle-number) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
| [2392-successful-pairs-of-spells-and-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2392-successful-pairs-of-spells-and-potions) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
## Simulation
|  |
| ------- |
| [2137-final-value-of-variable-after-performing-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2137-final-value-of-variable-after-performing-operations) |
| [2169-simple-bank-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2169-simple-bank-system) |
| [2211-count-collisions-on-a-road](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2211-count-collisions-on-a-road) |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
| [2274-keep-multiplying-found-values-by-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2274-keep-multiplying-found-values-by-two) |
| [2288-count-operations-to-obtain-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2288-count-operations-to-obtain-zero) |
| [2343-count-unguarded-cells-in-the-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2343-count-unguarded-cells-in-the-grid) |
| [2402-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2402-meeting-rooms-iii) |
| [2408-number-of-people-aware-of-a-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2408-number-of-people-aware-of-a-secret) |
| [2479-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2479-meeting-rooms-iii) |
| [3433-count-mentions-per-user](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3433-count-mentions-per-user) |
| [3616-make-array-elements-equal-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3616-make-array-elements-equal-to-zero) |
| [3768-check-if-digits-are-equal-in-string-after-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3768-check-if-digits-are-equal-in-string-after-operations-i) |
| [3794-find-the-minimum-amount-of-time-to-brew-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3794-find-the-minimum-amount-of-time-to-brew-potions) |
## Hash Table
|  |
| ------- |
| [0012-integer-to-roman](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0012-integer-to-roman) |
| [0013-roman-to-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0013-roman-to-integer) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0036-valid-sudoku](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0036-valid-sudoku) |
| [0037-sudoku-solver](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0037-sudoku-solver) |
| [0166-fraction-to-recurring-decimal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0166-fraction-to-recurring-decimal) |
| [0169-majority-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0169-majority-element) |
| [0756-pyramid-transition-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0756-pyramid-transition-matrix) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [0840-magic-squares-in-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0840-magic-squares-in-grid) |
| [0865-smallest-subtree-with-all-the-deepest-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0865-smallest-subtree-with-all-the-deepest-nodes) |
| [0900-reordered-power-of-2](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0900-reordered-power-of-2) |
| [0940-fruit-into-baskets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0940-fruit-into-baskets) |
| [0961-n-repeated-element-in-size-2n-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0961-n-repeated-element-in-size-2n-array) |
| [1006-vowel-spellchecker](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1006-vowel-spellchecker) |
| [1015-smallest-integer-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1015-smallest-integer-divisible-by-k) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1264-maximum-number-of-words-you-can-type](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1264-maximum-number-of-words-you-can-type) |
| [1353-find-resultant-array-after-removing-anagrams](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1353-find-resultant-array-after-removing-anagrams) |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [1590-make-sum-divisible-by-p](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1590-make-sum-divisible-by-p) |
| [1612-avoid-flood-in-the-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1612-avoid-flood-in-the-city) |
| [1834-minimum-number-of-people-to-teach](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1834-minimum-number-of-people-to-teach) |
| [1995-finding-pairs-with-a-certain-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1995-finding-pairs-with-a-certain-sum) |
| [2023-design-movie-rental-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2023-design-movie-rental-system) |
| [2059-unique-length-3-palindromic-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2059-unique-length-3-palindromic-subsequences) |
| [2169-simple-bank-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2169-simple-bank-system) |
| [2174-next-greater-numerically-balanced-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2174-next-greater-numerically-balanced-number) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2274-keep-multiplying-found-values-by-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2274-keep-multiplying-found-values-by-two) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2402-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2402-meeting-rooms-iii) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [2479-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2479-meeting-rooms-iii) |
| [2661-smallest-missing-non-negative-integer-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2661-smallest-missing-non-negative-integer-after-operations) |
| [2689-rearranging-fruits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2689-rearranging-fruits) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [2975-maximum-square-area-by-removing-fences-from-a-field](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2975-maximum-square-area-by-removing-fences-from-a-field) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3242-count-elements-with-maximum-frequency](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3242-count-elements-with-maximum-frequency) |
| [3381-maximum-subarray-sum-with-length-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3381-maximum-subarray-sum-with-length-divisible-by-k) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3501-delete-nodes-from-linked-list-present-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3501-delete-nodes-from-linked-list-present-in-array) |
| [3531-count-covered-buildings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3531-count-covered-buildings) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3581-the-two-sneaky-numbers-of-digitville](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3581-the-two-sneaky-numbers-of-digitville) |
| [3583-count-special-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3583-count-special-triplets) |
| [3592-find-x-sum-of-all-k-long-subarrays-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3592-find-x-sum-of-all-k-long-subarrays-ii) |
| [3606-coupon-code-validator](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3606-coupon-code-validator) |
| [3610-find-x-sum-of-all-k-long-subarrays-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3610-find-x-sum-of-all-k-long-subarrays-i) |
| [3623-count-number-of-trapezoids-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3623-count-number-of-trapezoids-i) |
| [3625-count-number-of-trapezoids-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3625-count-number-of-trapezoids-ii) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3656-minimum-number-of-operations-to-make-elements-in-array-distinct](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3656-minimum-number-of-operations-to-make-elements-in-array-distinct) |
| [3678-design-task-manager](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3678-design-task-manager) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
| [3834-minimum-operations-to-convert-all-elements-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3834-minimum-operations-to-convert-all-elements-to-zero) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
| [3872-find-most-frequent-vowel-and-consonant](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3872-find-most-frequent-vowel-and-consonant) |
## String
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [0012-integer-to-roman](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0012-integer-to-roman) |
| [0013-roman-to-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0014-longest-common-prefix) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0020-valid-parentheses](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0020-valid-parentheses) |
| [0022-generate-parentheses](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0022-generate-parentheses) |
| [0038-count-and-say](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0038-count-and-say) |
| [0165-compare-version-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0165-compare-version-numbers) |
| [0166-fraction-to-recurring-decimal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0166-fraction-to-recurring-decimal) |
| [0474-ones-and-zeroes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0474-ones-and-zeroes) |
| [0712-minimum-ascii-delete-sum-for-two-strings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0712-minimum-ascii-delete-sum-for-two-strings) |
| [0756-pyramid-transition-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0756-pyramid-transition-matrix) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [0944-delete-columns-to-make-sorted](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0944-delete-columns-to-make-sorted) |
| [0955-delete-columns-to-make-sorted-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0955-delete-columns-to-make-sorted-ii) |
| [1006-vowel-spellchecker](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1006-vowel-spellchecker) |
| [1058-lexicographically-smallest-equivalent-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1058-lexicographically-smallest-equivalent-string) |
| [1264-maximum-number-of-words-you-can-type](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1264-maximum-number-of-words-you-can-type) |
| [1353-find-resultant-array-after-removing-anagrams](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1353-find-resultant-array-after-removing-anagrams) |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [1636-number-of-substrings-with-only-1s](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1636-number-of-substrings-with-only-1s) |
| [1700-minimum-time-to-make-rope-colorful](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1700-minimum-time-to-make-rope-colorful) |
| [1747-lexicographically-smallest-string-after-applying-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1747-lexicographically-smallest-string-after-applying-operations) |
| [2059-unique-length-3-palindromic-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2059-unique-length-3-palindromic-subsequences) |
| [2137-final-value-of-variable-after-performing-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2137-final-value-of-variable-after-performing-operations) |
| [2147-number-of-ways-to-divide-a-long-corridor](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2147-number-of-ways-to-divide-a-long-corridor) |
| [2211-count-collisions-on-a-road](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2211-count-collisions-on-a-road) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2244-number-of-laser-beams-in-a-bank](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2244-number-of-laser-beams-in-a-bank) |
| [2346-largest-3-same-digit-number-in-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2346-largest-3-same-digit-number-in-string) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [2463-minimum-recolors-to-get-k-consecutive-black-blocks](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2463-minimum-recolors-to-get-k-consecutive-black-blocks) |
| [2887-sort-vowels-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2887-sort-vowels-in-a-string) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3194-find-words-containing-character](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3194-find-words-containing-character) |
| [3233-maximize-the-number-of-partitions-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3233-maximize-the-number-of-partitions-after-operations) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3462-vowels-game-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3462-vowels-game-in-a-string) |
| [3479-count-the-number-of-substrings-with-dominant-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3479-count-the-number-of-substrings-with-dominant-ones) |
| [3493-maximum-number-of-operations-to-move-ones-to-the-end](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3493-maximum-number-of-operations-to-move-ones-to-the-end) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3606-coupon-code-validator](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3606-coupon-code-validator) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
| [3768-check-if-digits-are-equal-in-string-after-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3768-check-if-digits-are-equal-in-string-after-operations-i) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
| [3872-find-most-frequent-vowel-and-consonant](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3872-find-most-frequent-vowel-and-consonant) |
## Matrix
|  |
| ------- |
| [0036-valid-sudoku](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0036-valid-sudoku) |
| [0037-sudoku-solver](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0037-sudoku-solver) |
| [0085-maximal-rectangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0085-maximal-rectangle) |
| [0407-trapping-rain-water-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0407-trapping-rain-water-ii) |
| [0417-pacific-atlantic-water-flow](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0417-pacific-atlantic-water-flow) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [0840-magic-squares-in-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0840-magic-squares-in-grid) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
| [1402-count-square-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1402-count-square-submatrices-with-all-ones) |
| [1628-count-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1628-count-submatrices-with-all-ones) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [1975-maximum-matrix-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1975-maximum-matrix-sum) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2244-number-of-laser-beams-in-a-bank](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2244-number-of-laser-beams-in-a-bank) |
| [2343-count-unguarded-cells-in-the-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2343-count-unguarded-cells-in-the-grid) |
| [2435-paths-in-matrix-whose-sum-is-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2435-paths-in-matrix-whose-sum-is-divisible-by-k) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2625-increment-submatrices-by-one](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2625-increment-submatrices-by-one) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3459-find-the-minimum-area-to-cover-all-ones-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3459-find-the-minimum-area-to-cover-all-ones-ii) |
| [3733-length-of-longest-v-shaped-diagonal-segment](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3733-length-of-longest-v-shaped-diagonal-segment) |
## Number Theory
|  |
| ------- |
| [2307-replace-non-coprime-numbers-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2307-replace-non-coprime-numbers-in-array) |
| [2610-closest-prime-numbers-in-range](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2610-closest-prime-numbers-in-range) |
| [2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2753-minimum-number-of-operations-to-make-all-array-elements-equal-to-1) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3768-check-if-digits-are-equal-in-string-after-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3768-check-if-digits-are-equal-in-string-after-operations-i) |
## Sliding Window
|  |
| ------- |
| [0867-new-21-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0867-new-21-game) |
| [0940-fruit-into-baskets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0940-fruit-into-baskets) |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [1586-longest-subarray-of-1s-after-deleting-one-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1586-longest-subarray-of-1s-after-deleting-one-element) |
| [2229-maximum-fruits-harvested-after-at-most-k-steps](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2229-maximum-fruits-harvested-after-at-most-k-steps) |
| [2463-minimum-recolors-to-get-k-consecutive-black-blocks](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2463-minimum-recolors-to-get-k-consecutive-black-blocks) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3479-count-the-number-of-substrings-with-dominant-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3479-count-the-number-of-substrings-with-dominant-ones) |
| [3483-alternating-groups-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3483-alternating-groups-ii) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3592-find-x-sum-of-all-k-long-subarrays-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3592-find-x-sum-of-all-k-long-subarrays-ii) |
| [3610-find-x-sum-of-all-k-long-subarrays-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3610-find-x-sum-of-all-k-long-subarrays-i) |
| [3622-maximum-frequency-of-an-element-after-performing-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3622-maximum-frequency-of-an-element-after-performing-operations-i) |
| [3640-maximum-frequency-of-an-element-after-performing-operations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3640-maximum-frequency-of-an-element-after-performing-operations-ii) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3743-reschedule-meetings-for-maximum-free-time-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3743-reschedule-meetings-for-maximum-free-time-i) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
## Dynamic Programming
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [0022-generate-parentheses](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0022-generate-parentheses) |
| [0085-maximal-rectangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0085-maximal-rectangle) |
| [0118-pascals-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0118-pascals-triangle) |
| [0120-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0120-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0416-partition-equal-subset-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0416-partition-equal-subset-sum) |
| [0474-ones-and-zeroes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0474-ones-and-zeroes) |
| [0712-minimum-ascii-delete-sum-for-two-strings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0712-minimum-ascii-delete-sum-for-two-strings) |
| [0826-soup-servings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0826-soup-servings) |
| [0867-new-21-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0867-new-21-game) |
| [1262-greatest-sum-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1262-greatest-sum-divisible-by-three) |
| [1402-count-square-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1402-count-square-submatrices-with-all-ones) |
| [1411-number-of-ways-to-paint-n-3-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1411-number-of-ways-to-paint-n-3-grid) |
| [1458-max-dot-product-of-two-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1458-max-dot-product-of-two-subsequences) |
| [1586-longest-subarray-of-1s-after-deleting-one-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1586-longest-subarray-of-1s-after-deleting-one-element) |
| [1628-count-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1628-count-submatrices-with-all-ones) |
| [1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array) |
| [1700-minimum-time-to-make-rope-colorful](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1700-minimum-time-to-make-rope-colorful) |
| [1851-maximum-number-of-events-that-can-be-attended-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1851-maximum-number-of-events-that-can-be-attended-ii) |
| [2028-the-earliest-and-latest-rounds-where-players-compete](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2028-the-earliest-and-latest-rounds-where-players-compete) |
| [2054-two-best-non-overlapping-events](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2054-two-best-non-overlapping-events) |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
| [2110-number-of-smooth-descent-periods-of-a-stock](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2110-number-of-smooth-descent-periods-of-a-stock) |
| [2147-number-of-ways-to-divide-a-long-corridor](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2147-number-of-ways-to-divide-a-long-corridor) |
| [2262-solving-questions-with-brainpower](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2262-solving-questions-with-brainpower) |
| [2408-number-of-people-aware-of-a-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2408-number-of-people-aware-of-a-secret) |
| [2435-paths-in-matrix-whose-sum-is-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2435-paths-in-matrix-whose-sum-is-divisible-by-k) |
| [2882-ways-to-express-an-integer-as-sum-of-powers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2882-ways-to-express-an-integer-as-sum-of-powers) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3233-maximize-the-number-of-partitions-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3233-maximize-the-number-of-partitions-after-operations) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3490-find-the-maximum-length-of-valid-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3490-find-the-maximum-length-of-valid-subsequence-i) |
| [3562-maximum-profit-from-trading-stocks-with-discounts](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3562-maximum-profit-from-trading-stocks-with-discounts) |
| [3573-best-time-to-buy-and-sell-stock-v](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3573-best-time-to-buy-and-sell-stock-v) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3733-length-of-longest-v-shaped-diagonal-segment](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3733-length-of-longest-v-shaped-diagonal-segment) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
## Recursion
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [0021-merge-two-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0021-merge-two-sorted-lists) |
| [0024-swap-nodes-in-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0024-swap-nodes-in-pairs) |
| [0326-power-of-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0326-power-of-three) |
| [0342-power-of-four](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0342-power-of-four) |
| [2050-count-good-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2050-count-good-numbers) |
## Greedy
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0135-candy](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0135-candy) |
| [0611-valid-triangle-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0611-valid-triangle-number) |
| [0759-set-intersection-size-at-least-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0759-set-intersection-size-at-least-two) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [0955-delete-columns-to-make-sorted-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0955-delete-columns-to-make-sorted-ii) |
| [1262-greatest-sum-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1262-greatest-sum-divisible-by-three) |
| [1448-maximum-69-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1448-maximum-69-number) |
| [1612-avoid-flood-in-the-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1612-avoid-flood-in-the-city) |
| [1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array) |
| [1700-minimum-time-to-make-rope-colorful](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1700-minimum-time-to-make-rope-colorful) |
| [1834-minimum-number-of-people-to-teach](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1834-minimum-number-of-people-to-teach) |
| [1917-maximum-average-pass-ratio](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1917-maximum-average-pass-ratio) |
| [1975-maximum-matrix-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1975-maximum-matrix-sum) |
| [2141-maximum-running-time-of-n-computers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2141-maximum-running-time-of-n-computers) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [2661-smallest-missing-non-negative-integer-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2661-smallest-missing-non-negative-integer-after-operations) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [2689-rearranging-fruits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2689-rearranging-fruits) |
| [2704-maximum-difference-by-remapping-a-digit](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2704-maximum-difference-by-remapping-a-digit) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3493-maximum-number-of-operations-to-move-ones-to-the-end](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3493-maximum-number-of-operations-to-move-ones-to-the-end) |
| [3620-maximum-number-of-distinct-elements-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3620-maximum-number-of-distinct-elements-after-operations) |
| [3741-reschedule-meetings-for-maximum-free-time-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3741-reschedule-meetings-for-maximum-free-time-ii) |
| [3743-reschedule-meetings-for-maximum-free-time-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3743-reschedule-meetings-for-maximum-free-time-i) |
| [3834-minimum-operations-to-convert-all-elements-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3834-minimum-operations-to-convert-all-elements-to-zero) |
## Binary Search
|  |
| ------- |
| [0611-valid-triangle-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0611-valid-triangle-number) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [1335-maximum-candies-allocated-to-k-children](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1335-maximum-candies-allocated-to-k-children) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
| [1612-avoid-flood-in-the-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1612-avoid-flood-in-the-city) |
| [1851-maximum-number-of-events-that-can-be-attended-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1851-maximum-number-of-events-that-can-be-attended-ii) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [2054-two-best-non-overlapping-events](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2054-two-best-non-overlapping-events) |
| [2141-maximum-running-time-of-n-computers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2141-maximum-running-time-of-n-computers) |
| [2229-maximum-fruits-harvested-after-at-most-k-steps](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2229-maximum-fruits-harvested-after-at-most-k-steps) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [2392-successful-pairs-of-spells-and-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2392-successful-pairs-of-spells-and-potions) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [2665-minimum-time-to-repair-cars](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2665-minimum-time-to-repair-cars) |
| [2690-house-robber-iv](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2690-house-robber-iv) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3453-separate-squares-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3453-separate-squares-i) |
| [3454-separate-squares-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3454-separate-squares-ii) |
| [3619-adjacent-increasing-subarrays-detection-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3619-adjacent-increasing-subarrays-detection-ii) |
| [3622-maximum-frequency-of-an-element-after-performing-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3622-maximum-frequency-of-an-element-after-performing-operations-i) |
| [3640-maximum-frequency-of-an-element-after-performing-operations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3640-maximum-frequency-of-an-element-after-performing-operations-ii) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
## Counting
|  |
| ------- |
| [0169-majority-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0169-majority-element) |
| [0900-reordered-power-of-2](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0900-reordered-power-of-2) |
| [2174-next-greater-numerically-balanced-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2174-next-greater-numerically-balanced-number) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [3242-count-elements-with-maximum-frequency](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3242-count-elements-with-maximum-frequency) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3493-maximum-number-of-operations-to-move-ones-to-the-end](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3493-maximum-number-of-operations-to-move-ones-to-the-end) |
| [3583-count-special-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3583-count-special-triplets) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
| [3872-find-most-frequent-vowel-and-consonant](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3872-find-most-frequent-vowel-and-consonant) |
## Prefix Sum
|  |
| ------- |
| [1590-make-sum-divisible-by-p](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1590-make-sum-divisible-by-p) |
| [2059-unique-length-3-palindromic-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2059-unique-length-3-palindromic-subsequences) |
| [2229-maximum-fruits-harvested-after-at-most-k-steps](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2229-maximum-fruits-harvested-after-at-most-k-steps) |
| [2529-range-product-queries-of-powers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2529-range-product-queries-of-powers) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [2625-increment-submatrices-by-one](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2625-increment-submatrices-by-one) |
| [3381-maximum-subarray-sum-with-length-divisible-by-k](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3381-maximum-subarray-sum-with-length-divisible-by-k) |
| [3383-taking-maximum-energy-from-the-mystic-dungeon](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3383-taking-maximum-energy-from-the-mystic-dungeon) |
| [3432-count-partitions-with-even-sum-difference](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3432-count-partitions-with-even-sum-difference) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3616-make-array-elements-equal-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3616-make-array-elements-equal-to-zero) |
| [3622-maximum-frequency-of-an-element-after-performing-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3622-maximum-frequency-of-an-element-after-performing-operations-i) |
| [3640-maximum-frequency-of-an-element-after-performing-operations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3640-maximum-frequency-of-an-element-after-performing-operations-ii) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
| [3794-find-the-minimum-amount-of-time-to-brew-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3794-find-the-minimum-amount-of-time-to-brew-potions) |
## Bit Manipulation
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0029-divide-two-integers) |
| [0342-power-of-four](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0342-power-of-four) |
| [0756-pyramid-transition-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0756-pyramid-transition-matrix) |
| [1018-binary-prefix-divisible-by-5](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1018-binary-prefix-divisible-by-5) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2059-unique-length-3-palindromic-subsequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2059-unique-length-3-palindromic-subsequences) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [2529-range-product-queries-of-powers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2529-range-product-queries-of-powers) |
| [2837-minimum-operations-to-make-the-integer-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2837-minimum-operations-to-make-the-integer-zero) |
| [3233-maximize-the-number-of-partitions-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3233-maximize-the-number-of-partitions-after-operations) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3676-smallest-number-with-all-set-bits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3676-smallest-number-with-all-set-bits) |
| [3744-minimum-operations-to-make-array-elements-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3744-minimum-operations-to-make-array-elements-zero) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
## Queue
|  |
| ------- |
| [2408-number-of-people-aware-of-a-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2408-number-of-people-aware-of-a-secret) |
| [2618-maximize-the-minimum-powered-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2618-maximize-the-minimum-powered-city) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
## Union Find
|  |
| ------- |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [1058-lexicographically-smallest-equivalent-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1058-lexicographically-smallest-equivalent-string) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [2092-find-all-people-with-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2092-find-all-people-with-secret) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Graph
|  |
| ------- |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
| [2092-find-all-people-with-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2092-find-all-people-with-secret) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2438-find-closest-node-to-given-two-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2438-find-closest-node-to-given-two-nodes) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Topological Sort
|  |
| ------- |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
## Shortest Path
|  |
| ------- |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
## Depth-First Search
|  |
| ------- |
| [0417-pacific-atlantic-water-flow](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0417-pacific-atlantic-water-flow) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [0865-smallest-subtree-with-all-the-deepest-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0865-smallest-subtree-with-all-the-deepest-nodes) |
| [1161-maximum-level-sum-of-a-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1161-maximum-level-sum-of-a-binary-tree) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1339-maximum-product-of-splitted-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1339-maximum-product-of-splitted-binary-tree) |
| [1747-lexicographically-smallest-string-after-applying-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1747-lexicographically-smallest-string-after-applying-operations) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [2092-find-all-people-with-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2092-find-all-people-with-secret) |
| [2438-find-closest-node-to-given-two-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2438-find-closest-node-to-given-two-nodes) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [2872-maximum-number-of-k-divisible-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2872-maximum-number-of-k-divisible-components) |
| [3562-maximum-profit-from-trading-stocks-with-discounts](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3562-maximum-profit-from-trading-stocks-with-discounts) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Breadth-First Search
|  |
| ------- |
| [0407-trapping-rain-water-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0407-trapping-rain-water-ii) |
| [0417-pacific-atlantic-water-flow](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0417-pacific-atlantic-water-flow) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [0865-smallest-subtree-with-all-the-deepest-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0865-smallest-subtree-with-all-the-deepest-nodes) |
| [1161-maximum-level-sum-of-a-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1161-maximum-level-sum-of-a-binary-tree) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [1747-lexicographically-smallest-string-after-applying-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1747-lexicographically-smallest-string-after-applying-operations) |
| [1970-last-day-where-you-can-still-cross](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1970-last-day-where-you-can-still-cross) |
| [2092-find-all-people-with-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2092-find-all-people-with-secret) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Sorting
|  |
| ------- |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0088-merge-sorted-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0088-merge-sorted-array) |
| [0169-majority-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0169-majority-element) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0611-valid-triangle-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0611-valid-triangle-number) |
| [0759-set-intersection-size-at-least-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0759-set-intersection-size-at-least-two) |
| [0900-reordered-power-of-2](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0900-reordered-power-of-2) |
| [1262-greatest-sum-divisible-by-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1262-greatest-sum-divisible-by-three) |
| [1353-find-resultant-array-after-removing-anagrams](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1353-find-resultant-array-after-removing-anagrams) |
| [1851-maximum-number-of-events-that-can-be-attended-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1851-maximum-number-of-events-that-can-be-attended-ii) |
| [2054-two-best-non-overlapping-events](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2054-two-best-non-overlapping-events) |
| [2092-find-all-people-with-secret](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2092-find-all-people-with-secret) |
| [2141-maximum-running-time-of-n-computers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2141-maximum-running-time-of-n-computers) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2274-keep-multiplying-found-values-by-two](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2274-keep-multiplying-found-values-by-two) |
| [2392-successful-pairs-of-spells-and-potions](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2392-successful-pairs-of-spells-and-potions) |
| [2402-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2402-meeting-rooms-iii) |
| [2479-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2479-meeting-rooms-iii) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [2689-rearranging-fruits](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2689-rearranging-fruits) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [2887-sort-vowels-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2887-sort-vowels-in-a-string) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3277-find-the-number-of-ways-to-place-people-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3277-find-the-number-of-ways-to-place-people-ii) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3430-count-days-without-meetings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3430-count-days-without-meetings) |
| [3433-count-mentions-per-user](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3433-count-mentions-per-user) |
| [3437-maximum-total-damage-with-spell-casting](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3437-maximum-total-damage-with-spell-casting) |
| [3531-count-covered-buildings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3531-count-covered-buildings) |
| [3606-coupon-code-validator](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3606-coupon-code-validator) |
| [3620-maximum-number-of-distinct-elements-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3620-maximum-number-of-distinct-elements-after-operations) |
| [3622-maximum-frequency-of-an-element-after-performing-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3622-maximum-frequency-of-an-element-after-performing-operations-i) |
| [3640-maximum-frequency-of-an-element-after-performing-operations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3640-maximum-frequency-of-an-element-after-performing-operations-ii) |
| [3657-check-if-grid-can-be-cut-into-sections](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3657-check-if-grid-can-be-cut-into-sections) |
## Heap (Priority Queue)
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0023-merge-k-sorted-lists) |
| [0407-trapping-rain-water-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0407-trapping-rain-water-ii) |
| [0794-swim-in-rising-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0794-swim-in-rising-water) |
| [1612-avoid-flood-in-the-city](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1612-avoid-flood-in-the-city) |
| [1917-maximum-average-pass-ratio](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1917-maximum-average-pass-ratio) |
| [2023-design-movie-rental-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2023-design-movie-rental-system) |
| [2054-two-best-non-overlapping-events](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2054-two-best-non-overlapping-events) |
| [2402-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2402-meeting-rooms-iii) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [2479-meeting-rooms-iii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2479-meeting-rooms-iii) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [3592-find-x-sum-of-all-k-long-subarrays-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3592-find-x-sum-of-all-k-long-subarrays-ii) |
| [3610-find-x-sum-of-all-k-long-subarrays-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3610-find-x-sum-of-all-k-long-subarrays-i) |
| [3678-design-task-manager](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3678-design-task-manager) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0020-valid-parentheses) |
| [0085-maximal-rectangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0085-maximal-rectangle) |
| [1628-count-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1628-count-submatrices-with-all-ones) |
| [1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array) |
| [2211-count-collisions-on-a-road](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2211-count-collisions-on-a-road) |
| [2307-replace-non-coprime-numbers-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2307-replace-non-coprime-numbers-in-array) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3834-minimum-operations-to-convert-all-elements-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3834-minimum-operations-to-convert-all-elements-to-zero) |
## Monotonic Stack
|  |
| ------- |
| [0085-maximal-rectangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0085-maximal-rectangle) |
| [1628-count-submatrices-with-all-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1628-count-submatrices-with-all-ones) |
| [1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1633-minimum-number-of-increments-on-subarrays-to-form-a-target-array) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3834-minimum-operations-to-convert-all-elements-to-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3834-minimum-operations-to-convert-all-elements-to-zero) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0014-longest-common-prefix) |
## Tree
|  |
| ------- |
| [0865-smallest-subtree-with-all-the-deepest-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0865-smallest-subtree-with-all-the-deepest-nodes) |
| [1161-maximum-level-sum-of-a-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1161-maximum-level-sum-of-a-binary-tree) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1339-maximum-product-of-splitted-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1339-maximum-product-of-splitted-binary-tree) |
| [2872-maximum-number-of-k-divisible-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2872-maximum-number-of-k-divisible-components) |
| [3562-maximum-profit-from-trading-stocks-with-discounts](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3562-maximum-profit-from-trading-stocks-with-discounts) |
## Binary Tree
|  |
| ------- |
| [0865-smallest-subtree-with-all-the-deepest-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0865-smallest-subtree-with-all-the-deepest-nodes) |
| [1161-maximum-level-sum-of-a-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1161-maximum-level-sum-of-a-binary-tree) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1339-maximum-product-of-splitted-binary-tree](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1339-maximum-product-of-splitted-binary-tree) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0022-generate-parentheses) |
| [0037-sudoku-solver](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0037-sudoku-solver) |
| [0679-24-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0679-24-game) |
| [0756-pyramid-transition-matrix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0756-pyramid-transition-matrix) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2174-next-greater-numerically-balanced-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2174-next-greater-numerically-balanced-number) |
## Combinatorics
|  |
| ------- |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3577-count-the-number-of-computer-unlocking-permutations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3577-count-the-number-of-computer-unlocking-permutations) |
| [3682-count-the-number-of-arrays-with-k-matching-adjacent-elements](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3682-count-the-number-of-arrays-with-k-matching-adjacent-elements) |
| [3768-check-if-digits-are-equal-in-string-after-operations-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3768-check-if-digits-are-equal-in-string-after-operations-i) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
## Enumeration
|  |
| ------- |
| [0900-reordered-power-of-2](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0900-reordered-power-of-2) |
| [1656-count-good-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1656-count-good-triplets) |
| [1747-lexicographically-smallest-string-after-applying-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1747-lexicographically-smallest-string-after-applying-operations) |
| [1925-count-square-sum-triples](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1925-count-square-sum-triples) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2174-next-greater-numerically-balanced-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2174-next-greater-numerically-balanced-number) |
| [2837-minimum-operations-to-make-the-integer-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2837-minimum-operations-to-make-the-integer-zero) |
| [2975-maximum-square-area-by-removing-fences-from-a-field](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2975-maximum-square-area-by-removing-fences-from-a-field) |
| [2998-count-symmetric-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2998-count-symmetric-integers) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3277-find-the-number-of-ways-to-place-people-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3277-find-the-number-of-ways-to-place-people-ii) |
| [3459-find-the-minimum-area-to-cover-all-ones-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3459-find-the-minimum-area-to-cover-all-ones-ii) |
| [3479-count-the-number-of-substrings-with-dominant-ones](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3479-count-the-number-of-substrings-with-dominant-ones) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3741-reschedule-meetings-for-maximum-free-time-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3741-reschedule-meetings-for-maximum-free-time-ii) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
## Divide and Conquer
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0023-merge-k-sorted-lists) |
| [0169-majority-element](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0169-majority-element) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Binary Indexed Tree
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Segment Tree
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [3454-separate-squares-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3454-separate-squares-ii) |
## Merge Sort
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0023-merge-k-sorted-lists) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Ordered Set
|  |
| ------- |
| [2023-design-movie-rental-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2023-design-movie-rental-system) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [3678-design-task-manager](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3678-design-task-manager) |
| [3863-power-grid-maintenance](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3863-power-grid-maintenance) |
## Linked List
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0021-merge-two-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0021-merge-two-sorted-lists) |
| [0023-merge-k-sorted-lists](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0023-merge-k-sorted-lists) |
| [0024-swap-nodes-in-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0024-swap-nodes-in-pairs) |
| [3501-delete-nodes-from-linked-list-present-in-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3501-delete-nodes-from-linked-list-present-in-array) |
## Design
|  |
| ------- |
| [1995-finding-pairs-with-a-certain-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1995-finding-pairs-with-a-certain-sum) |
| [2023-design-movie-rental-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2023-design-movie-rental-system) |
| [2169-simple-bank-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2169-simple-bank-system) |
| [2429-design-a-food-rating-system](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2429-design-a-food-rating-system) |
| [3678-design-task-manager](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3678-design-task-manager) |
## Memoization
|  |
| ------- |
| [2028-the-earliest-and-latest-rounds-where-players-compete](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2028-the-earliest-and-latest-rounds-where-players-compete) |
| [3733-length-of-longest-v-shaped-diagonal-segment](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3733-length-of-longest-v-shaped-diagonal-segment) |
## Probability and Statistics
|  |
| ------- |
| [0826-soup-servings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0826-soup-servings) |
| [0867-new-21-game](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0867-new-21-game) |
## Geometry
|  |
| ------- |
| [0830-largest-triangle-area](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0830-largest-triangle-area) |
| [1266-minimum-time-visiting-all-points](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1266-minimum-time-visiting-all-points) |
| [3047-find-the-largest-area-of-square-inside-two-rectangles](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3047-find-the-largest-area-of-square-inside-two-rectangles) |
| [3277-find-the-number-of-ways-to-place-people-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3277-find-the-number-of-ways-to-place-people-ii) |
| [3623-count-number-of-trapezoids-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3623-count-number-of-trapezoids-i) |
| [3625-count-number-of-trapezoids-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3625-count-number-of-trapezoids-ii) |
## Brainteaser
|  |
| ------- |
| [2837-minimum-operations-to-make-the-integer-zero](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2837-minimum-operations-to-make-the-integer-zero) |
| [3462-vowels-game-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3462-vowels-game-in-a-string) |
| [3577-count-the-number-of-computer-unlocking-permutations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3577-count-the-number-of-computer-unlocking-permutations) |
## Game Theory
|  |
| ------- |
| [3462-vowels-game-in-a-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3462-vowels-game-in-a-string) |
## Bitmask
|  |
| ------- |
| [3233-maximize-the-number-of-partitions-after-operations](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3233-maximize-the-number-of-partitions-after-operations) |
| [3851-find-sum-of-array-product-of-magical-sequences](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3851-find-sum-of-array-product-of-magical-sequences) |
## Line Sweep
|  |
| ------- |
| [3454-separate-squares-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3454-separate-squares-ii) |
<!---LeetCode Topics End-->