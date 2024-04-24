/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
const join = function (arr1, arr2) {
    let map = {};
    arr1.forEach((obj) => (map[obj.id] = obj));
    arr2.forEach((obj) => {
        if (map[obj.id]) {
            map[obj.id] = { ...map[obj.id], ...obj };
        } else {
            map[obj.id] = obj;
        }
    });
    return [...Object.values(map)];
};

join(
    [
        { id: 1, x: 2, y: 3 },
        { id: 2, x: 3, y: 6 },
    ],
    [
        { id: 2, x: 10, y: 20 },
        { id: 3, x: 0, y: 0 },
    ]
);
