# ETH-AVAX-Module3 Types of Functions
This program contains a smart contract which creates a token and then used Remix IDE to interact with it.

# Description
The TokenModule3 contract is an ERC20 token contract with additional ownership functionalities inherited from the Ownable contract of OpenZeppelin. It allows the contract owner to mint tokens, burn tokens, and transfer tokens to other addresses.

# Getting Started
This contract includes functions and events designed for minting, burning, and transferring tokens.

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
