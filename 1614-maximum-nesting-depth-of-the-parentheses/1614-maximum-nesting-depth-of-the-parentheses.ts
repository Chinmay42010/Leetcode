function maxDepth(s: string): number {
    let depth = 0,
        ans = 0;

    for (const ch of s) {
        depth += (ch === '(' ? 1 : 0) - (ch === ')' ? 1 : 0);
        ans = Math.max(ans, depth);
    }

    return ans;
};