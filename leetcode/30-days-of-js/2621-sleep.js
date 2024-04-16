/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    const myPromise = new Promise((res, rej)=> {
        setTimeout(()=>{
            res()
        }, millis)
    })
    return myPromise;
}

let t = Date.now();
sleep(1000).then(() => console.log(Date.now() - t)); // 100
