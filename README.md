#ETH-AVAX-Module3 Types of Functions
This program contains a smart contract which creates a token and then used Remix IDE to interact with it.

#Description
The TokenModule3 contract is an ERC20 token contract with additional ownership functionalities inherited from the Ownable contract of OpenZeppelin. It allows the contract owner to mint tokens, burn tokens, and transfer tokens to other addresses.

#Getting Started
This contract includes functions and events designed for minting, burning, and transferring tokens.

#Prerequisites
Solidity ^0.8.0 An Ethereum development environment (e.g., Remix IDE) A basic understanding of Solidity and smart contract development.

#Installing
Open Remix IDE. Create a new file with a .sol extension. Copy and paste the provided code into the file.

#Compiling and Deploying
In Remix, navigate to the "Solidity Compiler" tab. Ensure the compiler version is set to 0.8.20 (or another compatible version). Click "Compile PlasticRecycleToken.sol". After successful compilation, navigate to the "Deploy & Run Transactions" tab. Select the PlasticRecycleToken contract from the dropdown menu. Click "Deploy".

#Authors
Khyati kumari

#License
This project is licensed under the MIT License

# Metacrafter-Avalanche-Module-3
// SPDX-License-Identifier: MIT
pragma solidity 0.8.26;

contract Counter {
    uint public count =0;

    event Increment(uint value);
    event Decrement(uint value);

    function getCount() view public returns(uint) {
        return count;
    }
    
    function increment() public {
        count += 1;
        emit Increment(count);
    }

    function decrement() public {
        count -= 1;
        emit Decrement(count);
    }
}
