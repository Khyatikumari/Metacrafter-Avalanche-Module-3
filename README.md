

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
