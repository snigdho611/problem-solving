/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
const addTwoPromises = async function(promise1, promise2) {
    const res1 = await promise1.then((result)=>(result)).catch((err)=>0);
    const res2 = await promise2.then((result)=>(result)).catch((err)=>0);
    return res1+res2;
};

const promise1 = new Promise(resolve => setTimeout(() => resolve(2), 20)), promise2 = new Promise(resolve => setTimeout(() => resolve(5), 60))

const main = async () => {
    const result = await addTwoPromises(promise1, promise2);
    
    console.log(result)
}

main()

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */