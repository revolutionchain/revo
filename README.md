What is Revo?
-------------

![image](https://user-images.githubusercontent.com/38892618/111605157-5bede300-87d6-11eb-8002-dba20ce7d19a.png)

Revo is a decentralized blockchain project built on Bitcoin's UTXO model, with support for Ethereum Virtual Machine based smart contracts, and secured by a PoA consensus model. It achieves this through the revolutionary Account Abstraction Layer which allows the EVM to communicate with Revo's Bitcoin-like UTXO blockchain. For more general information about Revo as well as links to join our community, go to https://www.revo.revolutionchain.it/

Welcome to the Revo Testnet Network. This is the main testnet where the data hold value and should be guarded very carefully. If you are testing the network, or developing unstable software on Revo platform, we highly recommend using official testnet or regtest mode. 

The major features of the Revo network include:

1. Compatibility with the Ethereum Virtual Machine, which allows for compatibility with most existing Solidity based smart contracts. No special solidity compiler is required to deploy your smart contract to Revo (based on Qtum codebase). 
2. A Proof of Authority consensus system which is optimized for Revo's contract model. Dedicated seedondes help to secure the network. 
3. The Decentralized Governance Protocol is completely implemented and functional, which allows certain network parameters to be modified without a fork or other network disruption. This currently controls parameters like block size, gas prices, etc. 
4. Uses the UTXO transaction model and is compatible with Bitcoin, allowing for existing tooling and workflows to be used with Revo. This allows for the infamous SPV protocol to be used which is ideal for light wallets on mobile phones and IoT devices.

Note: Revo Core is considered beta software. We make no warranties or guarantees of its security or stability.

### Revo Smart Contract Limitations

*	EVM smart contracts cannot receive coins from or send coins to any address type other than pay-to-pubkeyhash (starts with R) addresses. This is due to a limitation in the EVM
*	Contracts are not allowed to create contracts with an initial endowment of coins. The contract must first be created, and then be sent coins in a separate transaction. Humans are also not allowed to create contracts with an initial endowment of coins.
*	Although all of the infrastructure is present, Revo Core does not currently parse Solidity event data. You must parse this yourself using either searchlogs or -record-log-opcodes features.
*	It is not possible to send a contract coins without also executing the contract. This is also the case of Ethereum. This was promised in earlier discussions and technically does work, but due to lack of time for testing this feature was disabled. We hope to reenable this feature with release of the x86 virtual machine in 2021.
*	In Revo there can be multiple addresses used to create new blocks. However, the EVM can only see the first output using the coinbase operation in Solidity (this address is also the one registered for the continuous node rewards after 500 blocks).

----------

# Building Revo Core


### Build on Ubuntu

This is a quick start script for compiling Revo on Ubuntu Server 20.04.2


    sudo apt-get install automake autoconf libtool gcc g++ pkg-config gettext mc git make

    # If you want to build the Qt GUI:
    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler qrencode

    git clone https://github.com/revolutionchain/revo --recursive
    cd revo    
    cd depends && make -j(nproc)    (copy path of built libs from that output for --prefix)
    cd ..
    ./autogen.sh
    ./configure --disable-tests --disable-bench --prefix=that_path
    make -j(nproc)
   
    # Note autogen will prompt to install some more dependencies if needed
    ./autogen.sh
    ./configure 
    make -j2

License
-------

Revo is GPLv3 licensed.
