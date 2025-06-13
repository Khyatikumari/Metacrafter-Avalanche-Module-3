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
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [1889-check-if-number-is-a-sum-of-powers-of-three](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1889-check-if-number-is-a-sum-of-powers-of-three) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2050-count-good-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2050-count-good-numbers) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2610-closest-prime-numbers-in-range](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2610-closest-prime-numbers-in-range) |
| [2649-count-total-number-of-colored-cells](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2649-count-total-number-of-colored-cells) |
| [2998-count-symmetric-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2998-count-symmetric-integers) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
## Array
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0135-candy](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0135-candy) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0416-partition-equal-subset-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0416-partition-equal-subset-sum) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [1335-maximum-candies-allocated-to-k-children](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1335-maximum-candies-allocated-to-k-children) |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [1656-count-good-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1656-count-good-triplets) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2262-solving-questions-with-brainpower](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2262-solving-questions-with-brainpower) |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [2665-minimum-time-to-repair-cars](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2665-minimum-time-to-repair-cars) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [2690-house-robber-iv](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2690-house-robber-iv) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3152-maximum-value-of-an-ordered-triplet-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3152-maximum-value-of-an-ordered-triplet-ii) |
| [3154-maximum-value-of-an-ordered-triplet-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3154-maximum-value-of-an-ordered-triplet-i) |
| [3194-find-words-containing-character](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3194-find-words-containing-character) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3430-count-days-without-meetings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3430-count-days-without-meetings) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3483-alternating-groups-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3483-alternating-groups-ii) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
| [3656-minimum-number-of-operations-to-make-elements-in-array-distinct](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3656-minimum-number-of-operations-to-make-elements-in-array-distinct) |
| [3657-check-if-grid-can-be-cut-into-sections](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3657-check-if-grid-can-be-cut-into-sections) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3747-maximum-difference-between-adjacent-elements-in-a-circular-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3747-maximum-difference-between-adjacent-elements-in-a-circular-array) |
## Two Pointers
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
## Simulation
|  |
| ------- |
| [2265-partition-array-according-to-given-pivot](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2265-partition-array-according-to-given-pivot) |
## Hash Table
|  |
| ------- |
| [0012-integer-to-roman](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0012-integer-to-roman) |
| [0013-roman-to-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0013-roman-to-integer) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3656-minimum-number-of-operations-to-make-elements-in-array-distinct](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3656-minimum-number-of-operations-to-make-elements-in-array-distinct) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
## String
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [0012-integer-to-roman](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0012-integer-to-roman) |
| [0013-roman-to-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0014-longest-common-prefix) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0038-count-and-say](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0038-count-and-say) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [1058-lexicographically-smallest-equivalent-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1058-lexicographically-smallest-equivalent-string) |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2463-minimum-recolors-to-get-k-consecutive-black-blocks](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2463-minimum-recolors-to-get-k-consecutive-black-blocks) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3194-find-words-containing-character](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3194-find-words-containing-character) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
## Matrix
|  |
| ------- |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [3227-find-missing-and-repeated-values](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3227-find-missing-and-repeated-values) |
## Number Theory
|  |
| ------- |
| [2610-closest-prime-numbers-in-range](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2610-closest-prime-numbers-in-range) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
## Sliding Window
|  |
| ------- |
| [1460-number-of-substrings-containing-all-three-characters](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1460-number-of-substrings-containing-all-three-characters) |
| [2463-minimum-recolors-to-get-k-consecutive-black-blocks](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2463-minimum-recolors-to-get-k-consecutive-black-blocks) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3483-alternating-groups-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3483-alternating-groups-ii) |
| [3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3569-count-of-substrings-containing-every-vowel-and-k-consonants-ii) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
## Dynamic Programming
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [0416-partition-equal-subset-sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0416-partition-equal-subset-sum) |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
| [2262-solving-questions-with-brainpower](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2262-solving-questions-with-brainpower) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
| [3243-count-the-number-of-powerful-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3243-count-the-number-of-powerful-integers) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
| [3808-longest-palindrome-after-substring-concatenation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3808-longest-palindrome-after-substring-concatenation-ii) |
## Recursion
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0010-regular-expression-matching) |
| [2050-count-good-numbers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2050-count-good-numbers) |
## Greedy
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0011-container-with-most-water) |
| [0135-candy](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0135-candy) |
| [0768-partition-labels](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0768-partition-labels) |
| [0797-rabbits-in-forest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0797-rabbits-in-forest) |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3143-longest-unequal-adjacent-groups-subsequence-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3143-longest-unequal-adjacent-groups-subsequence-i) |
## Binary Search
|  |
| ------- |
| [1335-maximum-candies-allocated-to-k-children](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1335-maximum-candies-allocated-to-k-children) |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [2665-minimum-time-to-repair-cars](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2665-minimum-time-to-repair-cars) |
| [2690-house-robber-iv](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2690-house-robber-iv) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
## Counting
|  |
| ------- |
| [2237-longest-palindrome-by-concatenating-two-letter-words](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2237-longest-palindrome-by-concatenating-two-letter-words) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2614-maximum-count-of-positive-integer-and-negative-integer](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2614-maximum-count-of-positive-integer-and-negative-integer) |
| [3630-total-characters-in-string-after-transformations-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3630-total-characters-in-string-after-transformations-ii) |
| [3753-maximum-difference-between-even-and-odd-frequency-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3753-maximum-difference-between-even-and-odd-frequency-i) |
## Prefix Sum
|  |
| ------- |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
| [3643-zero-array-transformation-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3643-zero-array-transformation-ii) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
## Bit Manipulation
|  |
| ------- |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2308-divide-array-into-equal-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2308-divide-array-into-equal-pairs) |
| [2478-longest-nice-subarray](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2478-longest-nice-subarray) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
## Queue
|  |
| ------- |
| [3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3475-minimum-operations-to-make-binary-array-elements-equal-to-one-i) |
## Union Find
|  |
| ------- |
| [1058-lexicographically-smallest-equivalent-string](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1058-lexicographically-smallest-equivalent-string) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
## Graph
|  |
| ------- |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [2090-number-of-ways-to-arrive-at-destination](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2090-number-of-ways-to-arrive-at-destination) |
| [2220-find-all-possible-recipes-from-given-supplies](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2220-find-all-possible-recipes-from-given-supplies) |
| [2438-find-closest-node-to-given-two-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2438-find-closest-node-to-given-two-nodes) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
| [3348-minimum-cost-walk-in-weighted-graph](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3348-minimum-cost-walk-in-weighted-graph) |
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
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [2438-find-closest-node-to-given-two-nodes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2438-find-closest-node-to-given-two-nodes) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
## Breadth-First Search
|  |
| ------- |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
| [1424-maximum-candies-you-can-get-from-boxes](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1424-maximum-candies-you-can-get-from-boxes) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2793-count-the-number-of-complete-components](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2793-count-the-number-of-complete-components) |
## Sorting
|  |
| ------- |
| [0015-3sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0015-3sum) |
| [0016-3sum-closest](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0016-3sum-closest) |
| [0018-4sum](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0018-4sum) |
| [0368-largest-divisible-subset](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0368-largest-divisible-subset) |
| [2160-minimum-operations-to-make-a-uni-value-grid](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2160-minimum-operations-to-make-a-uni-value-grid) |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [2699-count-the-number-of-fair-pairs](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2699-count-the-number-of-fair-pairs) |
| [2888-minimum-index-of-a-valid-split](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2888-minimum-index-of-a-valid-split) |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
| [3321-type-of-triangle](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3321-type-of-triangle) |
| [3430-count-days-without-meetings](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3430-count-days-without-meetings) |
| [3657-check-if-grid-can-be-cut-into-sections](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3657-check-if-grid-can-be-cut-into-sections) |
## Heap (Priority Queue)
|  |
| ------- |
| [2588-maximum-number-of-points-from-grid-queries](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2588-maximum-number-of-points-from-grid-queries) |
| [2681-put-marbles-in-bags](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2681-put-marbles-in-bags) |
| [3717-minimum-operations-to-make-elements-within-k-subarrays-equal](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3717-minimum-operations-to-make-elements-within-k-subarrays-equal) |
## Stack
|  |
| ------- |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
## Monotonic Stack
|  |
| ------- |
| [3001-apply-operations-to-maximize-score](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3001-apply-operations-to-maximize-score) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0014-longest-common-prefix) |
## Tree
|  |
| ------- |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
## Binary Tree
|  |
| ------- |
| [1218-lowest-common-ancestor-of-deepest-leaves](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1218-lowest-common-ancestor-of-deepest-leaves) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/0017-letter-combinations-of-a-phone-number) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
## Combinatorics
|  |
| ------- |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
## Enumeration
|  |
| ------- |
| [1656-count-good-triplets](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1656-count-good-triplets) |
| [1993-sum-of-all-subset-xor-totals](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/1993-sum-of-all-subset-xor-totals) |
| [2998-count-symmetric-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2998-count-symmetric-integers) |
| [3201-distribute-candies-among-children-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3201-distribute-candies-among-children-ii) |
| [3548-find-the-count-of-good-integers](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3548-find-the-count-of-good-integers) |
| [3683-find-the-lexicographically-largest-string-from-the-box-i](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3683-find-the-lexicographically-largest-string-from-the-box-i) |
| [3761-maximum-difference-between-even-and-odd-frequency-ii](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/3761-maximum-difference-between-even-and-odd-frequency-ii) |
## Divide and Conquer
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Binary Indexed Tree
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Segment Tree
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Merge Sort
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
## Ordered Set
|  |
| ------- |
| [2280-count-good-triplets-in-an-array](https://github.com/Khyatikumari/Metacrafter-Avalanche-Module-3/tree/master/2280-count-good-triplets-in-an-array) |
<!---LeetCode Topics End-->